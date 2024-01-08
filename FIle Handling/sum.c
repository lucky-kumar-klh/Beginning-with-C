#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int sum = 0;
  float avg = 0;

  for (int i = 1; i < argc; i++){
    sum += atoi(argv[i]);
  }

  printf("Sum: %d, Average: %.2f\n", sum, sum*(1.0)/(argc-1));

  return 0;
}