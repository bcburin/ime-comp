#include <iostream>
#include "Lista.h"

int main() {
  ListaIFRF<int> lista1(4);

  lista1.inserir(1);
  lista1.inserir(2);
  lista1.inserir(3);
  lista1.inserir(4);
  lista1.inserir(5);
  lista1.remover();
  lista1.remover();

  lista1.imprimir();

  return 0;
}