#include <iostream>
#include "vetorOrdenado.h"

int main() {
  vetorOrdenado<int> vetor_int(9);

  vetor_int << "inteiros.txt";
  std::cout << "Vetor lido: " << vetor_int << std::endl;
  std::cout << "Primeira posicao do valor 5: " << (vetor_int + 5) << std::endl;
  std::cout << "Valores menores que 3: " << (vetor_int - 3) << std::endl;

  vetorOrdenado<std::string> vetor_str(6);

  vetor_str << "strings.txt";
  std::cout << std::endl << "Vetor lido: " << vetor_str << std::endl;
  std::cout << "Primeira posicao do valor joana: " << (vetor_str + "joana") << std::endl;
  std::cout << "Valores menores que paulo: " << (vetor_str - "paulo") << std::endl;

  return 0;
}