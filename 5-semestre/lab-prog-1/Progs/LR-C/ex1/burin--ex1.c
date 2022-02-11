#include <stdio.h>

void imprimir_pares(int);
void imprimir_borda();

int main() {
  int n = 0;

  printf("Insira um numero inteiro: ");
  scanf("%d", &n);

  imprimir_pares(n);

  return 0;
}

// Imprime numeros pares 0 < i < n
void imprimir_pares(int n) {
  imprimir_borda();
  for (int i = 1; 2*i < n; i++)
    printf("%d ",2*i);
  imprimir_borda();
}

void imprimir_borda() {
  printf("\n----------------\n");
}