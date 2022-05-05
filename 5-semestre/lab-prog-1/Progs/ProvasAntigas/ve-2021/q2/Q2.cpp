#include <iostream>
#include "JogoDaVelha.h"

int main() {
  JogoDaVelha jogo(3);

  JogoDaVelha::ResultadoDaJogada resultado = JogoDaVelha::ResultadoDaJogada::Valido;

  while ( !JogoDaVelha::resultado_final(resultado) ) {
    // Receber input do usuario
    int x, y;
    switch(jogo.get_jogador_atual()) {
      case JogoDaVelha::Jogador::O:
        std::cout << "Jogador O: ";
        break;
      case JogoDaVelha::Jogador::X:
        std::cout << "Jogador X: ";
        break;
    }
    std::cin >> x >> y;

    // Efetuar jogada a partir do input fornecido
    resultado = jogo.jogar(x,y);

    // Imprimir tabela do jogo se o resultado nao for invalido
    if(resultado != JogoDaVelha::ResultadoDaJogada::Invalido) {
      std::cout << std::endl;
      jogo.imprimir_tabela();
      std::cout << std::endl;
    }

    // Mostrar mensagem relativa a casa resultado
    switch(resultado) {
      case JogoDaVelha::ResultadoDaJogada::Invalido:
        std::cout << "Cordenadas invalidas!" << std::endl;
        break;
      case JogoDaVelha::ResultadoDaJogada::JogadorO_Ganha:
        std::cout << std::endl << "Jogador O ganha!" << std::endl;
        break;
      case JogoDaVelha::ResultadoDaJogada::JogadorX_Ganha:
        std::cout << std::endl << "Jogador X ganha!" << std::endl;
        break;
      case JogoDaVelha::ResultadoDaJogada::Empate:
        std::cout << std::endl << "Empate!" << std::endl;
        break;
    }

    std::cout << std::endl;
  }

  return 0;
}