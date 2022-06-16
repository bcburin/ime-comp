#include <iostream>
#include <vector>
#include "empregado.h"

int main() {
  std::vector<empregado> empregados = {
    empregado("joao", 1000, 4),
    empregado("joao", 1000, 4),
    empregado("joao", 1000, 4),
    empregado("maria", 1200, 7),
    empregado("maria", 1200, 7),
    empregado("maria", 1200, 7),
    empregado("ana", 900, 8),
    empregado("ana", 900, 8),
    empregado("ana", 900, 8),
    empregado("vitor", 1100, 9),
    empregado("vitor", 1100, 9),
    empregado("vitor", 1100, 9),
  };

  std::cout << "Quantidade de empregados: " << empregados[0].quantidade();

  return 0;
}