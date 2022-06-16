#include <iostream>
#include "BufferCircular.h"

int main() {
  BufferCircular<int> buffer(4);

  buffer.inserir_fim(1);
  buffer.inserir_fim(2);
  buffer.inserir_fim(3);
  buffer.inserir_fim(4);
  buffer.inserir_fim(5);
  buffer.remover_inicio();
  buffer.remover_fim();

  buffer.imprimir();  

  return 0;
}