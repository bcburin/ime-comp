#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "carta.h"
#include "jogador.h"

using std::vector;
using std::cout;
using std::endl;

int main() {
  srand(time(NULL));

  vector<Carta> mesa(52);

  std::generate_n(mesa.begin(), 53, Carta::gerador());

  std::random_shuffle(mesa.begin(), mesa.end());

  for(const auto& carta : mesa) cout << carta << " ";

  cout << endl;



  return EXIT_SUCCESS;
}
