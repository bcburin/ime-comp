#include "Poligono.h"
#include <math.h>

/* POLIGONO */

Poligono::Poligono(int num_lados, double lado): num_lados(num_lados), lado(lado) {}

double Poligono::angulos_internos() { return 180*(num_lados-2); }

double Poligono::perimetro() { return num_lados*lado; }

/* QUADRADO */

Quadrado::Quadrado(double lado): Poligono(4,lado) {}

double Quadrado::area() { return lado*lado; }

/* QUADRADO */

Triangulo::Triangulo(double lado): Poligono(3,lado) {}

double Triangulo::area() { return lado*sqrt(3)/4; }