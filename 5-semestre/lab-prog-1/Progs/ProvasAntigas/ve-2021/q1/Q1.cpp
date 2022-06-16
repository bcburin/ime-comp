#include "Deque.h"

int main() {
  Deque<int> deq(10);

  deq.inserir(2);
  deq.inserir(5);
  deq.inserir(7);

  deq.imprimir();

  return 0;
}