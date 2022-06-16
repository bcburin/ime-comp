#ifndef CONFRONTO_H
#define CONFRONTO_H

#include "personagem.h"

class Confronto {
  private:
    const SuperHeroi& heroi;
    const Vilao& vilao;
  public:
    Confronto(const SuperHeroi& heroi, const Vilao& vilao);
}

Confronto(const SuperHeroi& heroi, const Vilao& vilao): heroi(heroi), vilao(vilao) {}

#endif