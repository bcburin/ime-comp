#include <iostream>
#include "Complex.h"

int main() {
  Complex a(1,2), b(3,4), c(5,6);

  Complex d = c * b.conjugate() / ( b.abs() * b.abs() );

  // std::cout << std::fixed;
  // std::cout << std::setprecision(2);

  std::cout << "a + b: " << a + b << std::endl;
  std::cout << "c - a: " << c - a << std::endl;
  std::cout << "a * b: " << a * b << std::endl;
  std::cout << "c / b: " << c / b << std::endl;
  std::cout << "d: " << d << std::endl;
  std::cout << "b.abs(): " << b.abs() << std::endl;
  std::cout << "b.conjugate(): " << b.conjugate() << std::endl; 

  return 0;
}