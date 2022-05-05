#include <iostream>
#include "superpoder.h"
#include "personagem.h"

int main(int argc, char **argv) {
  Personagem superhomem("Superhomem", "Clarck Kent");

  superhomem.adicionar_superpoder(Superpoder::lista[0]);
  superhomem.adicionar_superpoder(Superpoder::lista[1]);
  superhomem.adicionar_superpoder(Superpoder::lista[2]);
  superhomem.adicionar_superpoder(Superpoder::lista[3]);

  std::cout << superhomem;


  return 0;
}