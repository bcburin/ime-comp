#include <iomanip>
#include "candidato.h"

int candidato::total = 0;

ostream& operator<< (ostream& os, const candidato& cand) {
  return os << cand.nome << " " << cand.partido << " -- " 
            << cand.votos << " -- " 
            << std::setprecision(2) <<((float)cand.votos)/candidato::total*100 << "%";
}

istream& operator>> (istream& is, candidato& cand) {
  return is >> cand.id >> cand.nome >> cand.partido;
}

bool candidato::menor::operator() (const candidato& cand1, const candidato& cand2) {
  return cand1.votos < cand2.votos;
}
