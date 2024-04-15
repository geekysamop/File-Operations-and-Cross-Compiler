#include <stdio.h>

int main(int argc, char *argv[]) {

  if (argc != 3) {
    printf("Usage: %s <input_file> <output_file>\n", argv[0]);
    return 1;
  }


  FILE *inputFile = fopen(argv[1], "r");
  if (inputFile == NULL) {
    printf("Error opening input file: %s\n", argv[1]);
    return 1;
  }


  float celsius;
  fscanf(inputFile, "%f", &celsius);


  fclose(inputFile);


  float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;


  FILE *outputFile = fopen(argv[2], "w");
  if (outputFile == NULL) {
    printf("Error opening output file: %s\n", argv[2]);
    return 1;
  }


  fprintf(outputFile, "%.2f F\n", fahrenheit);


  fclose(outputFile);

  printf("Conversion complete! Check the output file.\n");
  return 0;
}