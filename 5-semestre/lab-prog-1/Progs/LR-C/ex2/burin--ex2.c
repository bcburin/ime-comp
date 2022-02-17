#include <stdio.h>

// Declaracao das funcoes
void imprimir_pares(int max);
void imprimir_par_recursivo(int par, int max);
void imprimir_borda();

int main(int argc, char *argv[]) {
  int n = 0;

  // Verifiva se foi passado algum argumento na linha de comando
  // Caso contrario, pede-o ao usuario
  if (argc == 1) {
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);
  } else {
    n = atoi(argv[1]);
  }

  imprimir_pares(n);

  return 0;
}

// Imprime numeros pares 0 < i < max
void imprimir_pares(int max) {
  imprimir_borda();
  imprimir_par_recursivo(2,max);
  imprimir_borda();
}

void imprimir_par_recursivo(int par, int max) {
  if(par >= max) return;

  printf("%d ", par);
  imprimir_par_recursivo(par+2,max);
}

void imprimir_borda() {
  printf("\n----------------\n");
}