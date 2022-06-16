#ifndef BUFFER_CIRCULAR_H
#define BUFFER_CIRCULAR_H

#include <ostream>

template <typename T>
class BufferCircular {
  protected:
    int tamanho_maximo;
    int inicio;
    int fim;
    T* buffer;
  public:
    BufferCircular(int tamanho_maximo);
    BufferCircular(const BufferCircular<T>& original);
    ~BufferCircular();
    int tamanho();
    bool cheio();
    bool vazio();
    bool inserir_fim(const T elemento);
    bool inserir_inicio(const T elemento);
    bool remover_fim();
    bool remover_inicio();
    void imprimir();
};

int mod(int numero, int valor_mod);

template <typename T>
BufferCircular<T>::BufferCircular(int tamanho_maximo)
: tamanho_maximo(tamanho_maximo), inicio(-1), fim(-1), buffer(new T[tamanho_maximo]) {}

template <typename T>
BufferCircular<T>::BufferCircular(const BufferCircular<T>& original)
: tamanho_maximo(original.tamanho_maximo), inicio(original.inicio), fim(original.fim),
  buffer(new T[original.tamanho_maximo]) {
  // Copiar elementos
  for (int i = inicio; i <= fim; ++i) buffer[i] = original.buffer[i];
}

template <typename T>
BufferCircular<T>::~BufferCircular() { delete[] buffer; }

template <typename T>
int BufferCircular<T>::tamanho() { 
  if (inicio == -1 || fim == -1) return 0;
  return mod(fim-inicio, tamanho_maximo) + 1; 
}

template <typename T>
bool BufferCircular<T>::cheio() { return tamanho() == tamanho_maximo; }

template <typename T>
bool BufferCircular<T>::vazio() { return tamanho() == 0; }

template <typename T>
bool BufferCircular<T>::inserir_fim(const T elemento) {
  // Buffer cheio
  if (cheio()) return false;

  if (vazio()) {
    // Buffer vazio
    inicio = fim = 0;
    buffer[fim] = elemento;
  } else {
    // Buffer nao vazio
    fim = mod(fim+1, tamanho_maximo);
    buffer[fim] = elemento;
  }
  return true;
}

template <typename T>
bool BufferCircular<T>::inserir_inicio(const T elemento) {
  // Buffer cheio
  if(cheio()) return false;

  if (vazio()) {
    // Buffer vazio
    inicio = fim = 0;
  } else {
    // Buffer nao vazio
    inicio = mod(inicio-1, tamanho_maximo);
    buffer[fim] = elemento;
  }
  return true;
}

template <typename T>
bool BufferCircular<T>::remover_fim() {
  // Verificar Buffer vazio
  if (vazio()) return false;
  // Verificar Buffer unitario
  if (tamanho() == 1) { 
    inicio = fim = -1; // esvaziar Buffer
    return true;
  }
  // Decrementar fim
  fim = mod(fim-1, tamanho_maximo);
  return true;
}

template <typename T>
bool BufferCircular<T>::remover_inicio() {
  // Verificar Buffer vazio
  if (vazio()) return false;
  // Verificar Buffer unitario
  if (tamanho() == 1) { 
    inicio = fim = -1; // esvaziar Buffer
    return true;
  }
  // Decrementar inicio
  inicio = mod(inicio+1, tamanho_maximo);
  return true;
}


template <typename T>
void BufferCircular<T>::imprimir() {
  if (vazio()) return;

  for(int i = inicio; i != fim + 1; i = mod(i+1, tamanho_maximo)) {
    std::cout << buffer[i] << " ";
  }
  std::cout << std::endl;
}


int mod(int numero, int valor_mod) {
  while ( numero < 0 || numero >= valor_mod) {
    if (numero < 0) numero += valor_mod;
    if (numero >= valor_mod) numero -= valor_mod;
  }
  return numero;
}

#endif  