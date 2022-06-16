#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
#include <string>

template <typename T>
class Deque {
  private:
    int tamanho_maximo;
    int tamanho;
    T* deque;
  public:
    enum class Modo { Frente, Retaguarda };
    Deque(int tamanho_maximo);
    Deque(const Deque& original);
    ~Deque();
    bool inserir(T elemento, Modo modo);
    T remover(Modo modo);
    int get_tamanho();
    void imprimir();
};


/* IMPLEMENTACOES DOS TEMPLATES */

template <typename T>
Deque<T>::Deque(int tamanho_maximo)
: tamanho_maximo(tamanho_maximo), tamanho(0), deque(new T[tamanho_maximo]) {}

template <typename T>
Deque<T>::Deque(const Deque<T>& original)
: tamanho_maximo(original.tamanho_maximo), tamanho(original.tamanho), 
  deque(new T[original.tamanho_maximo]) {
  // Copiar elementros
  for (int i = 0; i != tamanho; ++i) {
    deque[i] = original.deque[i];
  }
}

template <typename T>
Deque<T>::~Deque() { delete[] deque; }

template <typename T>
bool Deque<T>::inserir(T elemento, Modo modo) {
  // Se com ocupacao maxima, nao permitir insercao
  if (tamanho == tamanho_maximo) return false;
  // Realizar insercao
  switch (modo) {
    case Modo::Frente:
      // Mover todos os elementos uma unidade a direita (Complexidade: O(n))
      for (int i = tamanho; i != 0; --i) deque[i] = deque[i-1];
      // Inserir copia do elemento na frente
      deque[0] = elemento;
      break;
    case Modo::Retaguarda:
      // Inserir copia do elemento na retaguarda
      deque[tamanho] = elemento;
      break;
  }
  // Incrementar tamanho
  ++tamanho;
  // Retornar sucesso
  return true;
}

template <typename T>
T Deque<T>::remover(Modo modo) {
  // Verificar lista vazia
  if (tamanho == 0) throw std::underflow_error("Deque esta vazio");
  // Decrementar tamanho
  --tamanho;
  // Remover elemento
  T removido;
  switch(modo) {
    case Modo::Frente:
      // Remover elemento da frente
      removido = deque[0];
      // Mover todos os demais elementos uma unidade a esquerda
      for (int i = 0; i != tamanho; ++i) deque[i] = deque[i+1];
      break;
    case Modo::Retaguarda:
      // Remover elemento da retaguarda
      removido = deque[tamanho];
      break;
  }
  // Retornar valor removido
  return removido;
}

template <typename T>
int Deque<T>::get_tamanho() { return tamanho; }

template <typename T>
void Deque<T>::imprimir() {
  std::cout << std::string("{");
  for (int i = 0; i != tamanho; ++i) { 
    std::cout << deque[i];
    if (i != tamanho-1) 
      std::cout << ", "; 
  }
  std::cout << "}";
}



#endif