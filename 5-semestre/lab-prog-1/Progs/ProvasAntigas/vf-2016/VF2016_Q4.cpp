#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

enum valores {VAZIO, CIRCULO, XIS};

class JogoDaVelha {
  valores tabuleiro[3][3];

public:

  struct casa_proxy {
    int x;
    int y;
    valores (*tab_ref)[3];

    casa_proxy& operator= (std::string jogada);
  };

  struct linha_proxy {
    int x;
    valores (*tab_ref)[3];

    casa_proxy operator[] (int y) { return casa_proxy {x, y, tab_ref}; }
  };

  JogoDaVelha() {
    for(int i = 0; i < 3; i++) 
      for(int j = 0; j < 3; j++) 
        tabuleiro[i][j] = VAZIO;
  }

  linha_proxy operator[] (int x) { return linha_proxy {x, tabuleiro}; }

  friend ostream& operator<< (ostream& os, JogoDaVelha& j);
};


ostream& operator<< (ostream& os, valores& valor);

ostream& operator<< (ostream& os, JogoDaVelha& j);



/* MAIN */

int main() {
  JogoDaVelha j;

  j[1][1] = "X";
  cout << j;
  j[2][2] = "O";
  cout << j;
  j[3][3] = "X";
  cout << j;
  j[3][1] = "O";
  cout << j;
  j[1][3] = "X";
  cout << j;
  j[1][2] = "O";
  cout << j;
  j[2][3] = "X";
  cout << j;  


  return 0;
}



/* IMPLEMENTACOES */

JogoDaVelha::casa_proxy& JogoDaVelha::casa_proxy::operator= (std::string jogada) {
  if(jogada == "O") tab_ref[x-1][y-1] = CIRCULO;
  else if(jogada == "X") tab_ref[x-1][y-1] = XIS;
  else throw invalid_argument("Jogada invalida!");
  return *this;
}

ostream& operator<< (ostream& os, valores& valor) {
  switch(valor) {
    case VAZIO:
      os << " ";
      break;
    case CIRCULO:
      os << "O";
      break;
    case XIS:
      os << "X";
      break;
  }
  return os;
}

ostream& operator<< (ostream& os, JogoDaVelha& jogo) {
  for(int i = 0; i < 3; i++) {
    if(i) { 
      for(int j = 0; j < 3; j++) os << (j ? "-" : "") << "-"; 
      os << endl;
    }
    for(int j = 0; j < 3; j++) os << (j ? "|" : "") << jogo.tabuleiro[i][j];
    os << endl;
  }
  return os << endl;
}


