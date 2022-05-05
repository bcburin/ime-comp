#include <iostream>
#include "Cliente.h"
#include "Banco.h"


int main() {
  Banco b(10);

  ClienteComum cc1("Joao", 1, 3, 5);
  ClienteComum cc2("Jose", 2, 4, 6);
  ClienteComum cc3("Luiz", 3, 5, 2);

  ClientePreferencial cp1("Maria", 1, 3);
  ClientePreferencial cp2("Ana", 2, 4);
  ClientePreferencial cp3("Jorge", 3, 5);

  b.adicionarCliente(cc2);
  b.adicionarCliente(cc3);
  b.adicionarCliente(cc1);

  b.adicionarCliente(cp2);
  b.adicionarCliente(cp3);
  b.adicionarCliente(cp1);

  stats st = b.simular();
  std::cout << st.tempo_medio << " " << st.desistentes << std::endl;
}