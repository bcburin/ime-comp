#include <stdio.h>
#include <stdlib.h>

void imprimir_pares(int);
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