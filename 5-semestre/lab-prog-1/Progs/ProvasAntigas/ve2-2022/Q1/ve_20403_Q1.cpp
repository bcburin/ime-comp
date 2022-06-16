#include <iostream>
#include <limits>
#include "jogo_da_forca.h"

int main() {
  // std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

  vector<string> palavras = {"abacaxi", "graviola", "melao"};

  JogoDaForca jogo(palavras);

  for(int i = 0; i != 3; ++i) {

    jogo.iniciar();

    char letra;

    while(!jogo.testeFimdeJogo()) {
      jogo.mostrar();
      std::cout << std::endl << "Insira uma letra: ";
      std::cin >> letra;
      jogo.jogar(letra);
    }

  }

  return 0;
}