#include <cmath>
#include <iostream>

class Ponto {
  private:
    double x;
    double y;
    double z;
  public:
    Ponto(double x, double y, double z) {
      this->x = x;
      this->y = y;
      this->z = z;
    }

    double getX() {return x;}
    double getY() {return y;}
    double getZ() {return z;}

    double distancia_para(Ponto p) {
      double dx = x - p.getX();
      double dy = y - p.getY();
      double dz = z - p.getZ();

      return sqrt(dx*dx + dy*dy + dz*dz);
    }
};

int main() {
  Ponto p1(1,1,1);
  Ponto p2(4,5,1);

  std::cout << "\nDistancia: " << p1.distancia_para(p2) << std::endl;

  return 0;
}