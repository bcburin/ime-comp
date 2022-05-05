#include <iostream>
#include "Poligono.h"

using namespace std;

int main(int argc, char **argv) {
  Poligono p(7.2, 10);
  Quadrado q(3);
  Triangulo t(1);

  cout << "Poligono(7.2,10):" << endl;
  cout << "-> angulos internos: " << p.angulos_internos() << endl;
  cout << "-> perimetro: " << p.perimetro() << endl;
  cout << "Quadrado(3):" << endl;
  cout << "-> angulos internos: " << q.angulos_internos() << endl;
  cout << "-> perimetro: " << q.perimetro() << endl;
  cout << "-> area: " << q.area() << endl;
  cout << "Triangulo(1):" << endl;
  cout << "-> angulos internos: " << t.angulos_internos() << endl;
  cout << "-> perimetro: " << t.perimetro() << endl;
  cout << "-> area: " << t.area();
  return 0;
}