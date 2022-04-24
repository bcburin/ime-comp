#include <stdio.h>
#include <stdlib.h>

struct no {
  int chave;
  struct no *prox;
};

struct no* inverter(struct no* L) {
  // Verificar lista vazia
  if (!L) return NULL;

  // Fase inicial
  struct no* LR = L;
  struct no* P = L;
  L = L->prox;
  P->prox = NULL;

  // Fase iterativa
  while(L) {
    LR = L;
    L = L->prox;
    LR->prox = P;
    P = LR;
  }
  return LR;
}

void imprimir_lista(struct no* L) {
  printf("\nLISTA\n");
  while(L) {
    printf("%d\n", L->chave);
    L = L->prox;
  }
}

int main() {
  struct no d = {4, NULL};
  struct no c = {3, &d};
  struct no b = {2, &c};
  struct no a = {1, &b};

  struct no* L = &a;

  imprimir_lista(L);
  
  L = inverter(L);

  imprimir_lista(L);

  return 0;
}
