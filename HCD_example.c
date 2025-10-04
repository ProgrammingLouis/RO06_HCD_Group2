#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "file_helper.h"

int apply_kernel_single_block(int input[3][3]) {
    // Somme des valeurs dans la fen�tre 3x3, chaque pixel est pond�r� � 1
    int sum = 0;
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

void HCD_filter(uint dimy, uint dimx, int16_t I_x[dimy][dimx], int16_t I_y[dimy][dimx], uint8_t output_img[dimy][dimx]) {
    int S_x2[dimy][dimx];
    int S_y2[dimy][dimx];
    int S_xy[dimy][dimx];

    // Calcul pour chaque pixel de l'image enti�re
    for (int y = 1; y < dimy - 1; y++) {
    	for (int x = 1; x < dimx - 1; x++) {
            // Calcul des produits Ix^2, Iy^2, Ix*Iy pour les fen�tres de lissage
            int Ix2_window[3][3];
            int Iy2_window[3][3];
            int Ixy_window[3][3];

            // Remplir les fen�tres de produits pour le lissage
            for (int ky = -1; ky <= 1; ky++) {
                for (int kx = -1; kx <= 1; kx++) {
                    int yy = y + ky;
                    int xx = x + kx;
                    Ix2_window[ky + 1][kx + 1] = (int)(I_x[yy][xx] * I_x[yy][xx]);
                    Iy2_window[ky + 1][kx + 1] = (int)(I_y[yy][xx] * I_y[yy][xx]);
                    Ixy_window[ky + 1][kx + 1] = (int)(I_x[yy][xx] * I_y[yy][xx]);
                }
            }

            // Appliquer le noyau de lissage sur les produits calcul�s
            S_x2[y][x] = apply_kernel_single_block(Ix2_window);
            S_y2[y][x] = apply_kernel_single_block(Iy2_window);
            S_xy[y][x] = apply_kernel_single_block(Ixy_window);

            // Calcul de la r�ponse Harris
            double det_M = (double)(S_x2[y][x] * S_y2[y][x]) - (double)(S_xy[y][x] * S_xy[y][x]);
            double trace_M = (double)(S_x2[y][x] + S_y2[y][x]);
            double R = det_M - 0.05 * (trace_M * trace_M);

            output_img[y][x] = R/100000. > 255.0 ? (uint8_t)(255) : R/100000. < 0.0 ? 0 : (uint8_t)(R/100000.);
        }
    }
}

int main(void)
{
  // Read colored input image
  ppm_file_t input_ppm_file = read_ppm_file("Text_company_logo.ppm");
  if (input_ppm_file.dimy == 0 || input_ppm_file.dimx == 0 || !input_ppm_file.pixels)
    return EXIT_FAILURE;
  uint dimy = input_ppm_file.dimy;
  uint dimx = input_ppm_file.dimx;
  // Create a fat 3D pointer for easier access
  uint8_t (*pixels)[input_ppm_file.dimx][3] = (uint8_t (*)[input_ppm_file.dimx][3]) input_ppm_file.pixels;

  // Convert to grayscale
  uint8_t (*grayscale_pixels)[input_ppm_file.dimx] = malloc(dimy*dimx * sizeof(uint8_t));
  for (uint y = 0; y < dimy; ++y)
  {
    for (uint x = 0; x < dimx; ++x)
    {
      uint8_t* colors = pixels[y][x];
      uint8_t gray_scale_val = (uint8_t)(0.299f*(float)colors[0] + 0.587f*(float)colors[1] + 0.114f*(float)colors[2]);
      grayscale_pixels[y][x] = gray_scale_val;
    }
  }

  free(input_ppm_file.pixels);

  // Write grayscale image to a file
  uint write_error = write_pgm_file("grayscale.pgm", dimy, dimx, (uint8_t*)grayscale_pixels);
  if (write_error)
    return EXIT_FAILURE;
  
  // Get Iy and Ix
  int16_t (*Iy_pixels)[input_ppm_file.dimx] = malloc(dimy*dimx * sizeof(int16_t));
  int16_t (*Ix_pixels)[input_ppm_file.dimx] = malloc(dimy*dimx * sizeof(int16_t));
  uint8_t (*abs_Iy_pixels)[input_ppm_file.dimx] = malloc(dimy*dimx * sizeof(uint8_t));
  uint8_t (*abs_Ix_pixels)[input_ppm_file.dimx] = malloc(dimy*dimx * sizeof(uint8_t));

  for (uint y = 0; y < dimy; ++y)
  {
    for (uint x = 0; x < dimx; ++x)
    {
      // TODO: Is this the most optimized ?
      if (y == 0 || y == dimy-1)
        Iy_pixels[y][x] = 0;
      else
        Iy_pixels[y][x] = grayscale_pixels[y+1][x] - grayscale_pixels[y-1][x];
      
      if (x == 0 || x == dimx-1)
        Ix_pixels[y][x] = 0;
      else
        Ix_pixels[y][x] = grayscale_pixels[y][x+1] - grayscale_pixels[y][x-1];
      abs_Iy_pixels[y][x] = (uint8_t)((Iy_pixels[y][x] + 255)/2);
      abs_Ix_pixels[y][x] = (uint8_t)((Ix_pixels[y][x] + 255)/2);
    }
  }
  free(grayscale_pixels);

  write_error = write_pgm_file("Iy.pgm", dimy, dimx, (uint8_t*)abs_Iy_pixels);
  if (write_error)
    return EXIT_FAILURE;
  write_error = write_pgm_file("Ix.pgm", dimy, dimx, (uint8_t*)abs_Ix_pixels);
  if (write_error)
    return EXIT_FAILURE;

  uint8_t (*output_img)[dimx] = malloc(dimy*dimx * sizeof(uint8_t));
  HCD_filter(dimy, dimx, Ix_pixels, Iy_pixels, output_img);

  write_error = write_pgm_file("out.pgm", dimy, dimx, (uint8_t*)output_img);
  if (write_error)
    return EXIT_FAILURE;
  
  free(output_img);

  free(Iy_pixels);
  free(Ix_pixels);
  free(abs_Iy_pixels);
  free(abs_Ix_pixels);
  
  return EXIT_SUCCESS;
}
