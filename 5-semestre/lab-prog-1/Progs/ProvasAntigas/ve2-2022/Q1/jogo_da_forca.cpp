#include "jogo_da_forca.h"

#include <iostream>
#include <algorithm>
#include <ctime>

const int JogoDaForca::chances_max = CHANCES_MAX;

JogoDaForca::JogoDaForca(vector<string> palavras)
: chances_usadas(0), palavras(palavras), palavra_atual(""), letras_usadas() {
  // Randomizar vetor de palavras
  srand(time(NULL));
  std::random_shuffle(this->palavras.begin(), this->palavras.end());
}

void JogoDaForca::iniciar() {
  // Zerar chances usadas
  chances_usadas = 0;
  // Escolhe palavra aleatoriamente
  palavra_atual = palavras.back();
  // Palavra nao pode mais ser escolhida
  palavras.pop_back();
  // Esvaziar letras usadas
  letras_usadas.clear();
  // DEBUG:
  // std::cout << "palavra escolhida: " << palavra_atual << std::endl;
}

void JogoDaForca::jogar(char letra) {
  if(letra_usada(letra)) {
    // Se essa letra ja foi jogada antes
    return; 
  }

  if(palavra_atual.find(letra) == string::npos) {
    // Palavra nao contem letra
    ++chances_usadas;
  }

  letras_usadas.insert(letra);
}

void JogoDaForca::mostrar() {
  std::cout << std::endl;
  for(const char& letra : palavra_atual) {
    std::cout << (letra_usada(letra) ? letra : '_') << ' ';
  }
  std::cout << "\tchances: " << chances_usadas << "/" << chances_max << std::endl;
}

bool JogoDaForca::testeFimdeJogo() {
  // Verificar se todas as chancer foram usadas
  if(chances_usadas == chances_max) {
    // Derrota
    std::cout << std::endl <<"Voce perdeu!" << std::endl;
    return true;
  } else {
    // Verificar se a palavra esta completa
    bool vitoria = true;
    for(const char& letra : palavra_atual) {
      if(!letra_usada(letra)) {
        vitoria = false;
        break;
      }
    }
    if(vitoria) {
      // Vitoria
      std::cout << std::endl << "Voce venceu!" << std::endl;
      return true;
    }
  }
  return false;
}