#include <stdio.h>
#include <stdlib.h>

// Declaracao das funcoes
void imprimir_pares(int max);
void imprimir_par_recursivo(int par, int max);
void imprimir_borda();
int imprimir_erro(char *name);


int main(int argc, char *argv[]) {
  int n = 0;

  // Verifiva se foi passado algum argumento na linha de comando
  if (argc != 2)
    return imprimir_erro(argv[0]);
    
  n = atoi(argv[1]);

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

int imprimir_erro(char *name) {
  // Retirar o diretorio do nome do executavel
  for(char *trav = name; *trav != 0; ++trav)
    if (*trav == '\\' || *trav == '/') name = trav+1;

  // Imprimir erro com base no nome do executavel
  printf("\n----------------------------------------------------------------------------------\n");
  printf("Insira na linha de comando a cota superior dos numeros pares a serem impressos\n");
  printf("Exemplo: %s 25\n", name);
  printf("----------------------------------------------------------------------------------\n");
  return 1;
}