#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <queue>
#include "candidato.h"

using std::unordered_map;
using std::priority_queue;
using std::ifstream;

int main() {
  unordered_map<int, candidato> candidatos;

  // Ler candidatos de candidatos.txt
  ifstream arq_candidatos("data/candidatos.txt");
  if(!arq_candidatos.is_open()) return EXIT_FAILURE;
  while(!arq_candidatos.eof()) {
    candidato novo_cand;
    arq_candidatos >> novo_cand;
    candidatos[novo_cand.id] = novo_cand;
  }
  arq_candidatos.close();

  // Imprimir candidatos
  // for(auto& pair : candidatos) std::cout << pair.second << std::endl;

  // Ler urnas
  for(int urna = 1; urna <= 4; ++urna) {
    std::stringstream nome_arq_urna;
    nome_arq_urna << "data/urna" << urna << ".txt"; 
    ifstream arq_urna(nome_arq_urna.str());
    if(!arq_urna.is_open()) {
      std::cerr << "Nao foi possivel abrir " + nome_arq_urna.str();
      return EXIT_FAILURE;
    }
    while(!arq_urna.eof()) {
      int cand_id;
      arq_urna >> cand_id;
      candidatos[cand_id].votos++;
      candidato::total++;
    }
  }

  // Colocar candidatos em fila prioritaria
  priority_queue<candidato, std::vector<candidato>, candidato::menor> fila_candidatos;
  for(auto& pair : candidatos) {
    fila_candidatos.push(pair.second);
  }

  // Imprimir resultados
  while(!fila_candidatos.empty()) {
    candidato cand = fila_candidatos.top();
    std::cout << cand << std::endl;
    fila_candidatos.pop();
  }

  return EXIT_SUCCESS;
}



