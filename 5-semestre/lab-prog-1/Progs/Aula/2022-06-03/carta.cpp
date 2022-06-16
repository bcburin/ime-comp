#include "carta.h"

map<Carta::Naipe, string> Carta::str_naipe = {
  {Carta::Naipe::ouro, "ouro"},
  {Carta::Naipe::espada, "espada"},
  {Carta::Naipe::copas, "copas"},
  {Carta::Naipe::paus, "paus"},
};

map<Carta::Valor, string>Carta::str_valor = {
  {Carta::Valor::dois, "2"},
  {Carta::Valor::tres, "3"},
  {Carta::Valor::quatro, "4"},
  {Carta::Valor::cinco, "5"},
  {Carta::Valor::seis, "6"},
  {Carta::Valor::sete, "7"},
  {Carta::Valor::oito, "8"},
  {Carta::Valor::nove, "9"},
  {Carta::Valor::dez, "10"},
  {Carta::Valor::valete, "Valete"},
  {Carta::Valor::dama, "Dama"},
  {Carta::Valor::rei, "Rei"},
  {Carta::Valor::as, "As"},
};


Carta::Carta(Valor v, Naipe n): valor_(v), naipe_(n) {}


ostream& operator << (ostream& os, const Carta& carta) {
  return os << "(" << Carta::str_valor[carta.valor()] 
            << ", " << Carta::str_naipe[carta.naipe()] << ")";
}

Carta& Carta::operator++ () {
  int v = static_cast<int>(valor());
  int n = static_cast<int>(naipe());
  v = (v+1)%13;
  if(v == 0) n = (n+1)%4;
  valor_ = static_cast<Valor>(v);
  naipe_ = static_cast<Naipe>(n);
  return *this;
}

Carta Carta::operator++ (int i) {
  Carta temp(*this);
  operator++();
  return temp;
}

Carta Carta::gerador::atual = Carta(Carta::Valor::dois, Carta::Naipe::ouro);

Carta Carta::gerador::operator() () { return atual++; }
