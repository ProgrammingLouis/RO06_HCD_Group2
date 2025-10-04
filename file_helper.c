#include <string.h>
#include <ctype.h>

#include "file_helper.h"

int read_token(FILE *fp, char *buf, size_t size) {
    int c;

    // Skip whitespace and comments
    do {
        c = fgetc(fp);
        if (c == '#') {  // skip comment line
            while (c != '\n' && c != EOF) c = fgetc(fp);
        }
    } while (isspace(c));

    if (c == EOF) return 0;
    ungetc(c, fp);

    return fscanf(fp, "%99s", buf);  // read token
}

ppm_file_t read_ppm_file(char *filename) {
  printf("Openning file %s ...\n", filename); 

  ppm_file_t error_struct = {0, 0, NULL};
  ppm_file_t ppm_file;

  FILE *input_file = fopen(filename, "rb");
  if (!input_file) {
    printf("Failed to open file !\n"); 
    return error_struct;
  }

    char buf[100];

    // Magic number
    if (!read_token(input_file, buf, sizeof(buf))) return error_struct;
    if (strcmp(buf, "P6") != 0) {
      printf("Invalid file format : Expected \"P6\" !\n");
      return error_struct;
    }

    // Width
    if (!read_token(input_file, buf, sizeof(buf))) return error_struct;
    ppm_file.dimx = atoi(buf);
    if (ppm_file.dimx == 0) {
      printf("Invalid file format : Expected integer for dimx !\n");
      return error_struct;
    }

    // Height
    if (!read_token(input_file, buf, sizeof(buf))) return error_struct;
    ppm_file.dimy = atoi(buf);
    if (ppm_file.dimy == 0) {
      printf("Invalid file format : Expected integer for dimy !\n");
      return error_struct;
    }

    // Maxval
    if (!read_token(input_file, buf, sizeof(buf))) return error_struct;
    if (atoi(buf) != 255) {
      printf("Invalid file format : Expected maxval == 255 !\n");
      return error_struct;  // only 8-bit
    }
  
  int c = fgetc(input_file);
  if (c != '\n') {
    printf("Invalid file format : Expected new line after maxval !\n");
    return error_struct;  // only 8-bit
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

uint write_pgm_file(char *filename, uint dimy, uint dimx, uint8_t *pixels) {
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
