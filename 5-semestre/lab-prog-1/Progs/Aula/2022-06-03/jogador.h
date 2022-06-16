#ifndef JOGADOR_H
#define JOGADOR_H

#include "carta.h"
#include <vector>
#include <ostream>

using std::vector;
using std::ostream;

struct Jogador {
  vector<carta> mao;
  static const NUM_JOGADORES = 2;
};

ostream& operator << (ostream& os, const Jogador& jogador);

#endif