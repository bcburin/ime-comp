#ifndef VETOR_ORDENADO_H
#define VETOR_ORDENADO_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>


template <typename T>
class vetorOrdenado {
  private:
    int capacidade;
    std::vector<T> valores;

    class menor_que { 
      private:
        T valor;
      public:
        menor_que(T valor): valor(valor) {}
        bool operator() (T outro) { return outro < valor; }
    };

  public:
    vetorOrdenado(int capacidade): capacidade(capacidade), valores() { if(capacidade < 0) throw std::invalid_argument("Capacidade negativa!"); }
    
    // Leitura de arquivo
    vetorOrdenado<T>& operator<< (std::string);

    // Busca da posicao de um valor
    int operator+ (T valor);

    // Contagem da quantidade de elementos menores que certo valor
    int operator- (T valor);

    // Integracao com operador << para ostream
    template <typename U>
    friend std::ostream& operator<< (std::ostream& os, const vetorOrdenado<U>& vetor);

};

template <typename T>
std::ostream& operator<< (std::ostream& os, const vetorOrdenado<T>& vetor);


/* IMPLEMENTACOES */

template <typename T>
vetorOrdenado<T>& vetorOrdenado<T>::operator<< (std::string filename) {
  std::ifstream file(filename);
  
  if(!file.is_open()) throw std::invalid_argument("Arquivo nao encontrado!");

  // Ler primeira linha do arquivo
  std::string raw; 
  std::getline(file, raw);
  
  // Separar string raw por carateres ','
  std::stringstream raw_buffer;
  std::string read_str;
  T valor;
  raw_buffer << raw;
  while(std::getline(raw_buffer, read_str, ',') && valores.size() < capacidade) {
    std::stringstream convert(read_str);
    convert >> valor;
    valores.push_back(valor);
  }

  // Ordenar vetor lido
  std::sort(valores.begin(), valores.end());

  return *this;
}


template <typename T>
int vetorOrdenado<T>::operator+ (T valor) {
  auto it = std::find(valores.begin(), valores.end(), valor);
  // Valor nao encontrado
  if(it == valores.end()) return -1;
  // Encontrar indice de valor encontrado
  return it - valores.begin();
}


template <typename T>
int vetorOrdenado<T>::operator- (T valor) {
  int count = std::count_if(valores.begin(), valores.end(), menor_que(valor));

  return count;
}


template <typename T>
std::ostream& operator<< (std::ostream& os, const vetorOrdenado<T>& vetor) {
  os << "{";
  for(auto it = vetor.valores.begin(); it != vetor.valores.end(); ++it) {
    os << (it == vetor.valores.begin() ? "" : ", ") << *it;
  }
  os << "}";
  return os;
}

#endif