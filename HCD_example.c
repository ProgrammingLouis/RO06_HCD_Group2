#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "file_helper.h"

int main(void)
{
  // Read colored input image
  ppm_file_t input_ppm_file = read_ppm_file("bclc.ppm");
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
      uint8_t gray_scale_val = (uint8_t)(0.299*(double)colors[0] + 0.587*(double)colors[1] + 0.114*(double)colors[2]);
      grayscale_pixels[y][x] = gray_scale_val;
    }
  }

  free(input_ppm_file.pixels);

  // Write grayscale image to a file
  uint write_error = write_pgm_file("grayscale.pgm", dimy, dimx, (uint8_t*)grayscale_pixels);
  if (write_error)
    return EXIT_FAILURE;
  
  // Get Iy and Ix
  uint8_t (*Iy_pixels)[input_ppm_file.dimx] = malloc(dimy*dimx * sizeof(uint8_t));
  uint8_t (*Ix_pixels)[input_ppm_file.dimx] = malloc(dimy*dimx * sizeof(uint8_t));

  for (uint y = 1; y < dimy-1; ++y)
  {
    for (uint x = 1; x < dimx-1; ++x)
    {
      Iy_pixels[y][x] = grayscale_pixels[y+1][x] - grayscale_pixels[y-1][x];
      Ix_pixels[y][x] = grayscale_pixels[y][x+1] - grayscale_pixels[y][x-1];
    }
  }
  free(grayscale_pixels);

  for (uint x = 0; x < dimx; ++x)
  {
    Iy_pixels[0][x] = 0;
    Ix_pixels[dimy-1][x] = 0;
  }
  for (uint y = 0; y < dimy; ++y)
  {
    Iy_pixels[y][0] = 0;
    Ix_pixels[y][dimx-1] = 0;
  }

  write_error = write_pgm_file("Iy.pgm", dimy, dimx, (uint8_t*)Iy_pixels);
  if (write_error)
    return EXIT_FAILURE;
  write_error = write_pgm_file("Ix.pgm", dimy, dimx, (uint8_t*)Ix_pixels);
  if (write_error)
    return EXIT_FAILURE;

  free(Iy_pixels);
  free(Ix_pixels);
  
  return EXIT_SUCCESS;
}
