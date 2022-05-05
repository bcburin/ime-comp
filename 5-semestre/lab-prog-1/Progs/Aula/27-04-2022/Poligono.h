#ifndef POLIGONO_H
#define POLIGONO_H

class Poligono {
  protected:
    int num_lados;
    double lado;
  public:
    Poligono(int num_lados, double lado);
    double angulos_internos();
    double perimetro();
};


class Quadrado: public Poligono {
  public:
    Quadrado(double lado);
    double area();
};


class Triangulo: public Poligono {
  public:
    Triangulo(double lado);
    double area();
};

#endif