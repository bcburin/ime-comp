#include "Style.h"

void imprimir_borda() {
  printf("\n-----------------------------------------------------\n");
}


void pressione_para_continuar() {
  printf("\n(PRESSIONE ENTER PARA CONTINUAR)");
  char dummy;
  fflush(stdin);
  scanf("%c", &dummy);
}
