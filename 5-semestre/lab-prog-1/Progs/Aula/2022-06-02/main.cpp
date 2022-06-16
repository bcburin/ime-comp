#include <iostream>
#include "set.h"

int main() {
  set<int> ints1 = {1,2,3};
  set<int> ints2 = {2,5,9,12};
  ints1 |= 5;
  ints2 -= 12;
  auto ints_union = ints1 | ints2;
  auto ints_inter = ints1 & ints2;
  auto ints_symdiff = ints_union - ints_inter;
  std::cout << ints1 << std::endl;
  std::cout << ints2 << std::endl;
  std::cout << ints_union << std::endl;
  std::cout << ints_inter << std::endl;
  std::cout << ints_symdiff << std::endl;
  return 0;
}