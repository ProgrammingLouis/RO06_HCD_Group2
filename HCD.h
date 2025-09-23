#include <assert.h>
#include <ap_axi_sdata.h>
#include <stdint.h>
#include "hls_math.h"

#ifndef WIDTH
#define WIDTH 256 // Taille par défaut si non définie
#endif

#ifndef HEIGHT
#define HEIGHT 256 // Taille par défaut si non définie
#endif

#define K 0.04 // Constante de Harris
#define Rseuil 500

#define IMG_SIZE WIDTH * HEIGHT

typedef uint8_t T; // Entier 8 bits
typedef uint32_t T32;
typedef ap_axiu<32, 4, 5, 5> AXI_VAL; // 8 bits pour l'interface AXI

// Prototype des fonctions
void standalone_HCD_filter(T I_x[HEIGHT][WIDTH], T I_y[HEIGHT][WIDTH], T output[HEIGHT][WIDTH]);
void HLS_accel(AXI_VAL in_stream[IMG_SIZE], AXI_VAL out_stream[IMG_SIZE]);

// Fonction pour appliquer le lissage directement, sans matrice de noyau
template <typename T>
T apply_kernel_single_block(T input[3][3]) {
#pragma HLS INLINE
    // Somme des valeurs dans la fenêtre 3x3, chaque pixel est pondéré à 1
    T sum = 0;
    sum += input[0][0];
    sum += input[0][1];
    sum += input[0][2];
    sum += input[1][0];
    sum += input[1][1];
    sum += input[1][2];
    sum += input[2][0];
    sum += input[2][1];
    sum += input[2][2];

    // Retourne la somme des pixels voisins
    return sum/9;
}

template <typename T, int IMG_HEIGHT, int IMG_WIDTH>
void HCD_filter_hw(T I_x[IMG_HEIGHT][IMG_WIDTH], T I_y[IMG_HEIGHT][IMG_WIDTH], T output_img[IMG_HEIGHT][IMG_WIDTH]) {
#pragma HLS INLINE

    T S_x2[IMG_HEIGHT][IMG_WIDTH] = {0};
    T S_y2[IMG_HEIGHT][IMG_WIDTH] = {0};
    T S_xy[IMG_HEIGHT][IMG_WIDTH] = {0};

    // Calcul pour chaque pixel de l'image entière
    y_pixels_loop: for (int y = 1; y < IMG_HEIGHT - 1; y++) {
    	x_pixels_loop: for (int x = 1; x < IMG_WIDTH - 1; x++) {
            // Calcul des produits Ix^2, Iy^2, Ix*Iy pour les fenêtres de lissage
            T Ix2_window[3][3];
            T Iy2_window[3][3];
            T Ixy_window[3][3];

            // Remplir les fenêtres de produits pour le lissage
            y_window_loop: for (int ky = -1; ky <= 1; ky++) {
                x_window_loop: for (int kx = -1; kx <= 1; kx++) {
                    int yy = y + ky;
                    int xx = x + kx;
                    Ix2_window[ky + 1][kx + 1] = I_x[yy][xx] * I_x[yy][xx];
                    Iy2_window[ky + 1][kx + 1] = I_y[yy][xx] * I_y[yy][xx];
                    Ixy_window[ky + 1][kx + 1] = I_x[yy][xx] * I_y[yy][xx];
                }
            }

            // Appliquer le noyau de lissage sur les produits calculés
            S_x2[y][x] = apply_kernel_single_block<T>(Ix2_window);
            S_y2[y][x] = apply_kernel_single_block<T>(Iy2_window);
            S_xy[y][x] = apply_kernel_single_block<T>(Ixy_window);

            // Calcul de la réponse Harris
            double det_M = (double)(S_x2[y][x] * S_y2[y][x]) - (double)(S_xy[y][x] * S_xy[y][x]);
            double trace_M = (double)(S_x2[y][x] + S_y2[y][x]);
            double R = det_M - K * (trace_M * trace_M);

            // Détection de coin en appliquant un seuil
            if (R > Rseuil) {
                output_img[y][x] = 1;
            } else {
                output_img[y][x] = 0;
            }
        }
    }
}


// Fonctions pour lire et ecrire les pixels en 32 bits via AXI
template <int U, int TI, int TD>
void pop_stream(const AXI_VAL &e, T &pixel_8) {  // Extraction de 8 bits depuis 32 bits
#pragma HLS INLINE
    pixel_8 = static_cast<T>(e.data & 0xFF); // Extraction des 8 bits inferieurs
}

template <int U, int TI, int TD>
AXI_VAL push_stream(const T &pixel_8, bool last = false) {  // Encodage d'un pixel 8 bits en 32 bits
#pragma HLS INLINE
    AXI_VAL e;
    e.data = static_cast<T32>(pixel_8); // Insertion du pixel 8 bits dans les 32 bits
    e.strb = -1; // 32 bits, donc 4 bytes
    e.keep = 15; // 32 bits, donc 4 bytes
    e.user = 0;
    e.last = last ? 1 : 0;
    e.id = 0;
    e.dest = 0;
    return e;
}

// Fonction d'interface AXI4-Stream avec traitement par blocs
template <typename T, int IMG_WIDTH, int IMG_HEIGHT, int SIZE, int U, int TI, int TD>
void wrapped_HCD_filter_hw(AXI_VAL in_stream[SIZE * 2], AXI_VAL out_stream[SIZE]) {
#pragma HLS INLINE

 T I_x[IMG_HEIGHT][IMG_WIDTH];
 T I_y[IMG_HEIGHT][IMG_WIDTH];
 T output_img[IMG_HEIGHT][IMG_WIDTH];

 // Lecture de I_x
 for (int y = 0; y < IMG_HEIGHT; y++) {
    x_Ix_read_loop: for (int x = 0; x < IMG_WIDTH; x++) {
         int idx = y * IMG_WIDTH + x;
         T pixel_8;
         pop_stream<U, TI, TD>(in_stream[idx], pixel_8);
         I_x[y][x] = pixel_8;
     }
 }

 // Lecture de I_y (décalage de SIZE pour la seconde image)
 for (int y = 0; y < IMG_HEIGHT; y++) {
	 x_Iy_read_loop: for (int x = 0; x < IMG_WIDTH; x++) {
         int idx = y * IMG_WIDTH + x + SIZE;
         T pixel_8;
         pop_stream<U, TI, TD>(in_stream[idx], pixel_8);
         I_y[y][x] = pixel_8;
     }
 }

 // Appel de la fonction de traitement par bloc
 HCD_filter_hw<T, IMG_HEIGHT, IMG_WIDTH>(I_x, I_y, output_img);

 // Conversion de output_img vers le flux de sortie
 for (int y = 0; y < IMG_HEIGHT; y++) {
	 x_conv_loop: for (int x = 0; x < IMG_WIDTH; x++) {
         int idx = y * IMG_WIDTH + x;
         T pixel_8 = output_img[y][x];
         out_stream[idx] = push_stream<U, TI, TD>(pixel_8, idx == (SIZE - 1));
     }
 }
}
