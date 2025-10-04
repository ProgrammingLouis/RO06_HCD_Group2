#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "file_helper.h"

void HCD_filter(uint dimy, uint dimx, int32_t Iy2[restrict dimy][dimx], int32_t Ix2[restrict dimy][dimx], int32_t Iyx[restrict dimy][dimx], uint8_t output_img[restrict dimy][dimx]) {
  size_t aalloc_size = ((dimy * dimx * sizeof(int32_t) + 63) / 64) * 64;
  int32_t (*Iy2_sum)[dimx] = aligned_alloc(64, aalloc_size);
  int32_t (*Ix2_sum)[dimx] = aligned_alloc(64, aalloc_size);
  int32_t (*Iyx_sum)[dimx] = aligned_alloc(64, aalloc_size);

  int32_t (*Iy2_blur)[dimx] = aligned_alloc(64, aalloc_size);
  int32_t (*Ix2_blur)[dimx] = aligned_alloc(64, aalloc_size);
  int32_t (*Iyx_blur)[dimx] = aligned_alloc(64, aalloc_size);

  // Horizontal pass
  for (int y = 0; y < dimy; y++) {
    Iy2_sum[y][1] = Iy2[y][0] + Iy2[y][1] + Iy2[y][2];
    Ix2_sum[y][1] = Ix2[y][0] + Ix2[y][1] + Ix2[y][2];
    Iyx_sum[y][1] = Iyx[y][0] + Iyx[y][1] + Iyx[y][2];
    for (int x = 2; x < dimx - 1; x++) {
      Iy2_sum[y][x] = Iy2_sum[y][x-1] - Iy2[y][x-2] + Iy2[y][x+1];
      Ix2_sum[y][x] = Ix2_sum[y][x-1] - Ix2[y][x-2] + Ix2[y][x+1];
      Iyx_sum[y][x] = Iyx_sum[y][x-1] - Iyx[y][x-2] + Iyx[y][x+1];
    }
  }

  // Vertical pass
  for (int x = 0; x < dimx; x++) {
    Iy2_blur[1][x] = Iy2_sum[0][x] + Iy2_sum[1][x] + Iy2_sum[2][x];
    Ix2_blur[1][x] = Ix2_sum[0][x] + Ix2_sum[1][x] + Ix2_sum[2][x];
    Iyx_blur[1][x] = Iyx_sum[0][x] + Iyx_sum[1][x] + Iyx_sum[2][x];
    for (int y = 2; y < dimy - 1; y++) {
      Iy2_blur[y][x] = Iy2_blur[y-1][x] - Iy2_sum[y-2][x] + Iy2_sum[y+1][x];
      Ix2_blur[y][x] = Ix2_blur[y-1][x] - Ix2_sum[y-2][x] + Ix2_sum[y+1][x];
      Iyx_blur[y][x] = Iyx_blur[y-1][x] - Iyx_sum[y-2][x] + Iyx_sum[y+1][x];
    }
  }
  free(Iy2_sum);
  free(Ix2_sum);
  free(Iyx_sum);

  // Calcul pour chaque pixel de l'image entiere
  for (int y = 1; y < dimy - 1; y++) {
    for (int x = 1; x < dimx - 1; x++) {
      // Calcul de la reponse Harris
      float det_M = ( ((float)Iy2_blur[y][x] * (float)Ix2_blur[y][x]) - ((float)Iyx_blur[y][x] * (float)Iyx_blur[y][x]) ) / 81.0;
      float trace_M = ( ((float)Iy2_blur[y][x] + (float)Ix2_blur[y][x]) ) / 9.0;
      float R = det_M - 0.05 * (trace_M * trace_M);

      output_img[y][x] = R/100000. > 255.0 ? (uint8_t)(255) : R/100000. < 0.0 ? 0 : (uint8_t)(R/100000.);
    }
  }

  free(Iy2_blur);
  free(Ix2_blur);
  free(Iyx_blur);
}

int main(void)
{
  // Read colored input image
  ppm_file_t input_ppm_file = read_ppm_file("text_test.ppm");
  if (input_ppm_file.dimy == 0 || input_ppm_file.dimx == 0 || !input_ppm_file.pixels)
    return EXIT_FAILURE;
  uint dimy = input_ppm_file.dimy;
  uint dimx = input_ppm_file.dimx;
  // Create a fat 3D pointer for easier access
  uint8_t (*pixels)[input_ppm_file.dimx][3] = (uint8_t (*)[input_ppm_file.dimx][3]) input_ppm_file.pixels;

  // Convert to grayscale
  size_t aalloc_size = ((dimy * dimx * sizeof(uint8_t) + 63) / 64) * 64;
  uint8_t (*grayscale_pixels)[input_ppm_file.dimx] = aligned_alloc(64, aalloc_size);
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
  aalloc_size = ((dimy * dimx * sizeof(int32_t) + 63) / 64) * 64;
  int32_t (*Iy2_pixels)[input_ppm_file.dimx] = aligned_alloc(64, aalloc_size);
  int32_t (*Ix2_pixels)[input_ppm_file.dimx] = aligned_alloc(64, aalloc_size);
  int32_t (*Iyx_pixels)[input_ppm_file.dimx] = aligned_alloc(64, aalloc_size);

  for (uint y = 0; y < dimy; ++y)
  {
    for (uint x = 0; x < dimx; ++x)
    {
      // TODO: Is this the most optimized ?
      if (y == 0 || y == dimy-1) {
        Iy2_pixels[y][x] = 0;
        Iyx_pixels[y][x] = 0;
      } else {
        Iy2_pixels[y][x] = grayscale_pixels[y+1][x] - grayscale_pixels[y-1][x];
        Iyx_pixels[y][x] = Iy2_pixels[y][x];
        Iy2_pixels[y][x] = Iy2_pixels[y][x] * Iy2_pixels[y][x];
      }
      
      if (x == 0 || x == dimx-1) {
        Ix2_pixels[y][x] = 0;
        Iyx_pixels[y][x] = 0;
      } else {
        Ix2_pixels[y][x] = grayscale_pixels[y][x+1] - grayscale_pixels[y][x-1];
        Iyx_pixels[y][x] *= Ix2_pixels[y][x];
        Ix2_pixels[y][x] = Ix2_pixels[y][x] * Ix2_pixels[y][x];
      }
    }
  }
  free(grayscale_pixels);

  uint8_t (*output_img)[dimx] = aligned_alloc(64, dimy*dimx * sizeof(uint8_t));
  HCD_filter(dimy, dimx, Iy2_pixels, Ix2_pixels, Iyx_pixels, output_img);

  write_error = write_pgm_file("out_opt.pgm", dimy, dimx, (uint8_t*)output_img);
  if (write_error)
    return EXIT_FAILURE;
  
  free(output_img);

  free(Iy2_pixels);
  free(Ix2_pixels);
  free(Iyx_pixels);
  
  return EXIT_SUCCESS;
}
