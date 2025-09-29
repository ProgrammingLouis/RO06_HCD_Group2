#include "file_helper.h"

ppm_file_t read_ppm_file(char *filename) {
  printf("Openning file %s ...\n", filename); 

  ppm_file_t error_struct = {0, 0, NULL};
  ppm_file_t ppm_file;

  FILE *input_file = fopen(filename, "rb");
  if (!input_file) {
    printf("Failed to open file !\n"); 
    return error_struct;
  }
  int param_read = fscanf(input_file, "P6\n%u %u\n255\n", &ppm_file.dimx, &ppm_file.dimy);
  if (param_read != 2) {
    printf("Unsupported file format !\n");
    return error_struct;
  }

  printf("Image dimensions : %u x %u\n", ppm_file.dimx, ppm_file.dimy);

  ppm_file.pixels = malloc(ppm_file.dimy*ppm_file.dimx*3 * sizeof(uint8_t));

  size_t blocks_read = fread(ppm_file.pixels, 3*ppm_file.dimx*ppm_file.dimy, 1, input_file);
  if (blocks_read != 1) {
    printf("Failed to read pixel data !\n");
    return error_struct;
  }

  fclose(input_file);
  return ppm_file;
}

uint write_pgm_file(char *filename, uint dimy, uint dimx, uint8_t*pixels) {
  printf("Writing file %s ...\n", filename); 

  FILE *output_file = fopen(filename, "wb");
  if (!output_file) {
    printf("Failed to open file !\n"); 
    return 1;
  }

  fprintf(output_file, "P5\n%u %u\n255\n", dimx, dimy);
  size_t blocks_written = fwrite(pixels, dimy*dimx, 1, output_file);
  if (blocks_written != 1) {
    printf("Failed to write pixel data !\n");
    return 1;
  }

  fclose(output_file);
  return 0;
}

uint write_pgm_file_16bits(char *filename, uint dimy, uint dimx, uint16_t*pixels) {
  printf("Writing file %s ...\n", filename); 

  FILE *output_file = fopen(filename, "wb");
  if (!output_file) {
    printf("Failed to open file !\n"); 
    return 1;
  }

  fprintf(output_file, "P5\n%u %u\n65535\n", dimx, dimy);
  size_t blocks_written = fwrite(pixels, 2*dimy*dimx, 1, output_file);
  if (blocks_written != 1) {
    printf("Failed to write pixel data !\n");
    return 1;
  }
  
  fclose(output_file);
  return 0;
}