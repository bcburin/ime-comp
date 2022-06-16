#include "jogador.h"

ostream& operator << (ostream& os, const Jogador& jogador) {
  os << "MAO: "
  for(const auto& carta : mao_) os << carta << "  ";
  return os;
}
