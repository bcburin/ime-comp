#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;

  fp = fopen("file.txt", "r");
  if(!fp)
    exit(EXIT_FAILURE);

  int sum = 0;
  int prod = 1;

  int num = 0;

  while( fscanf(fp, "%d ", &num) != EOF) {
    if (num%2 == 0) prod *= num;
    if (num%2 == 1) sum += num;
  }

  fclose(fp);

  printf("\nProdutorio dos numeros pares: %d\n", prod);
  printf("Somatorio dos numeros impares: %d\n", sum);

  return 0;
}