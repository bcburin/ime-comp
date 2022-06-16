#include <iostream>
#include "nonacci.h"

#define N 9

using std::cout;
using std::endl;

int main() {
  Nonacci<2> fibonacci;
  Nonacci<3> tribonacci;
  Nonacci<N> X;

  cout << (fibonacci << 50) << endl;
  cout << (tribonacci << 50) << endl;
  cout << (X << 30) << endl;

  return EXIT_SUCCESS;
}