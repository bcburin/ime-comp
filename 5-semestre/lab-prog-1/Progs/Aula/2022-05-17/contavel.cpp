#include "contavel.h"
#include <iostream>

int contavel::quantidade_ = 0;

contavel::contavel() { ++quantidade_; validar_quantidade(); }

contavel::~contavel() { --quantidade_; validar_quantidade(); }

bool contavel::validar_quantidade() { 
  bool valido = min() <= quantidade() && quantidade() <= max();
  if(!valido) 
    std::cout << "Quantidade(" << quantidade() << ") invalida (min: " << min() << ", max: " << max() << ")" << std::endl;
  return valido;
}
