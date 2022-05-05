#ifndef JOGO_DA_VELHA_H
#define JOGO_DA_VELHA_H

#include <iostream>

class JogoDaVelha {
public:
  enum class ResultadoDaJogada { Invalido, Valido, JogadorO_Ganha, JogadorX_Ganha, Empate };
  enum class Jogador {O, X};
private:
  struct Coordenada {
    enum class Estado { Vazio, JogadorO, JogadorX };
    Estado estado;
    Coordenada();
  };
  /* Atributos */
  Jogador jogador_atual;
  int tamanho;
  Coordenada** tabela;
public:
  JogoDaVelha(int tamanho);
  ~JogoDaVelha();
  ResultadoDaJogada jogar(int x, int y);
  Jogador get_jogador_atual() const;
  bool tabela_cheia();
  void imprimir_tabela();
  static bool resultado_final(ResultadoDaJogada resultado);
};

#endif