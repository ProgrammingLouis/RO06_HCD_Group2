#ifndef FILE_HELPER_H
#define FILE_HELPER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

struct ppm_file {
  uint dimx, dimy;
  uint8_t *pixels;
} typedef ppm_file_t;

#define PIXEL(img, y, x, c)  ((img).pixels[3 * ((y) * (img).dimx + (x)) + (c)])

// Read the given ppm file colored image.
// Only 8-bit color format is allowed.
// Returns {0, 0, NULL} if an error occured.
// IMPORTANT : Don't forget to free pixels array after use !!!
ppm_file_t read_ppm_file(char *filename);

// Write the given pgm file grayscale image.
// Only 8-bit pixel format is allowed.
// Returns 1 if an error occured, 0 instead.
uint write_pgm_file(char *filename, uint dimy, uint dimx, uint8_t*pixels);

// Write the given pgm file grayscale image.
// Only 16-bit pixel format is allowed.
// Returns 1 if an error occured, 0 instead.
uint write_pgm_file_16bits(char *filename, uint dimy, uint dimx, uint16_t*pixels);

#endif // FILE_HELPER_H
