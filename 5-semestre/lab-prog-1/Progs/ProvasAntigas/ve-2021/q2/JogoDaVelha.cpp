#include "JogoDaVelha.h"

JogoDaVelha::Coordenada::Coordenada(): estado(Estado::Vazio) {}


JogoDaVelha::JogoDaVelha(int tamanho): jogador_atual(Jogador::O), tamanho(tamanho) {
  tabela = new Coordenada*[tamanho];
  for (int i = 0; i != tamanho; ++i) {
    tabela[i] = new Coordenada[tamanho];
  }
}


JogoDaVelha::~JogoDaVelha() {
  for (int i = 0; i != tamanho; ++i) {
    delete[] tabela[i];
  }
  delete[] tabela;
}

bool JogoDaVelha::tabela_cheia() {
  for (int i = 0; i != tamanho; ++i) {
    for (int j = 0; j != tamanho; ++j) {
      if (tabela[i][j].estado == Coordenada::Estado::Vazio) return false;
    }
  }
  return true;
}


JogoDaVelha::Jogador JogoDaVelha::get_jogador_atual() const { return jogador_atual; }


JogoDaVelha::ResultadoDaJogada JogoDaVelha::jogar(int x, int y) {
  // Verificar se coordenada esta fora da tabela
  if (x < 0 || x >= tamanho || y < 0 || y >= tamanho) return ResultadoDaJogada::Invalido;
  // Verificar se coordenada esta ocupada
  if (tabela[x][y].estado != Coordenada::Estado::Vazio) return ResultadoDaJogada::Invalido;
  // Fazer jogada
  switch(jogador_atual) {
    case Jogador::O:
      tabela[x][y].estado = Coordenada::Estado::JogadorO;
      jogador_atual = Jogador::X;
      break;
    case Jogador::X:
      tabela[x][y].estado = Coordenada::Estado::JogadorX;
      jogador_atual = Jogador::O;
      break;
  }
  // Verificar linhas
  for (int i = 0; i != tamanho; ++i) {
    bool jO_ganhou = true;
    bool jX_ganhou = true;
    for (int j = 0; j != tamanho; ++j) {
      if (tabela[i][j].estado != Coordenada::Estado::JogadorO) jO_ganhou = false;
      if (tabela[i][j].estado != Coordenada::Estado::JogadorX) jX_ganhou = false;
      if (!jO_ganhou && !jX_ganhou) break;
    }
    if(jO_ganhou) return ResultadoDaJogada::JogadorO_Ganha;
    if(jX_ganhou) return ResultadoDaJogada::JogadorX_Ganha;
  }
  // Verificar colunas
  for (int j = 0; j != tamanho; ++j) {
    bool jO_ganhou = true;
    bool jX_ganhou = true;
    for (int i = 0; i != tamanho; ++i) {
      if (tabela[i][j].estado != Coordenada::Estado::JogadorO) jO_ganhou = false;
      if (tabela[i][j].estado != Coordenada::Estado::JogadorX) jX_ganhou = false;
      if (!jO_ganhou && !jX_ganhou) break;
    }
    if(jO_ganhou) return ResultadoDaJogada::JogadorO_Ganha;
    if(jX_ganhou) return ResultadoDaJogada::JogadorX_Ganha;
  }
  // Verificar diagonal principal
  bool jO_ganhou = true;
  bool jX_ganhou = true;
  for (int i = 0; i != tamanho; ++i) {
    if (tabela[i][i].estado != Coordenada::Estado::JogadorO) jO_ganhou = false;
    if (tabela[i][i].estado != Coordenada::Estado::JogadorX) jX_ganhou = false;
    if (!jO_ganhou && !jX_ganhou) break;
  }
  if(jO_ganhou) return ResultadoDaJogada::JogadorO_Ganha;
  if(jX_ganhou) return ResultadoDaJogada::JogadorX_Ganha;
  // Verificar diagonal secundaria
  jO_ganhou = true;
  jX_ganhou = true;
  for (int i = 0; i != tamanho; ++i) {
    if (tabela[i][tamanho-i-1].estado != Coordenada::Estado::JogadorO) jO_ganhou = false;
    if (tabela[i][tamanho-i-1].estado != Coordenada::Estado::JogadorX) jX_ganhou = false;
    if (!jO_ganhou && !jX_ganhou) break;
  }
  if(jO_ganhou) return ResultadoDaJogada::JogadorO_Ganha;
  if(jX_ganhou) return ResultadoDaJogada::JogadorX_Ganha;
  // Verificar se tabela esta cheia
  if (tabela_cheia()) return ResultadoDaJogada::Empate;
  // Retornar resultado valido
  return ResultadoDaJogada::Valido;
}

void JogoDaVelha::imprimir_tabela() {
  for (int i = 0; i != tamanho; ++i) {
    for (int j = 0; j != tamanho; ++j) {
      switch(tabela[i][j].estado) {
        case Coordenada::Estado::Vazio:
          std::cout << " ";
          break;
        case Coordenada::Estado::JogadorO:
          std::cout << "O";
          break;
        case Coordenada::Estado::JogadorX:
          std::cout << "X";
      }
      if (j != tamanho-1) std::cout << "|";
    }
    if (i != tamanho-1) {    
      std::cout << std::endl;
      for (int j = 0; j != 2*tamanho-1; ++j) { std::cout << "-"; }
      std::cout << std::endl;
    }
  }
}


bool JogoDaVelha::resultado_final(ResultadoDaJogada resultado) {
  return resultado == ResultadoDaJogada::JogadorO_Ganha
      || resultado == ResultadoDaJogada::JogadorX_Ganha
      || resultado == ResultadoDaJogada::Empate;
}
