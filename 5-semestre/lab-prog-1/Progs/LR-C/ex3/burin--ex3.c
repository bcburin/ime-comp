#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;

  fp = fopen("temp/file.txt", "r");
  if(!fp)
    exit(EXIT_FAILURE);

  int soma = 0;
  int prod = 1;
  while(!feof(fp)) {
    char *s = gets(fp);

    if( s == "\n" ) continue;

    int n = atoi(s);

    if (n%2 == 0) prod *= n;
    else soma += n;
  }

  fclose(fp);

  printf("Produtorio dos numeros pares: %d\n", prod);
  printf("Somatorio dos numeros impares: %d\n", soma);
}