#ifndef CARTA_H
#define CARTA_H

#include <ostream>
#include <string>
#include <map>

using std::map;
using std::string;
using std::ostream;

class Carta {
  public:
    enum class Naipe { ouro, copas, espada, paus };
    enum class Valor { dois, tres, quatro, cinco, seis, sete, oito, nove, dez, valete, dama, rei, as };
    struct gerador { static Carta atual; Carta operator() (); };
    static map<Naipe, string> str_naipe;
    static map<Valor, string> str_valor;
  private:
    Valor valor_;
    Naipe naipe_;
  public:
    Carta(Valor v = Valor::as, Naipe n = Naipe::copas);
    Valor valor() const { return valor_; }
    Naipe naipe() const { return naipe_; }
    Carta& operator++ ();
    Carta operator++ (int);
};


ostream& operator << (ostream& os, const Carta& carta);

#endif