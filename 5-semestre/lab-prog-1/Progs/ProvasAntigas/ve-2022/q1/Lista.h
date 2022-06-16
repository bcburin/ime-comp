#ifndef LISTA_H
#define LISTA_H

#include "BufferCircular.h"

// Implementar lista que remove elemenros no fim
template <typename T>
class ListaIF {
  protected:
    BufferCircular<T> buffer;
  public:
    ListaIF(int tamanho_inicial=16);
    bool inserir(T elemento);
    // bool remover();
    void imprimir() { buffer.imprimir(); }
};

// Implementar lista que insere e remove elementos no fim da lista
template <typename T>
class ListaIFRF: public ListaIF<T> {
  public:
    ListaIFRF(int tamanho_inicial=16);
    bool remover() { return ListaIF<T>::buffer.remover_fim(); }
};

// Implementar lista que insere no fim e remove no inicio
template <typename T>
class ListaIFRI: public ListaIF<T> {
  public:
    ListaIFRI(int tamanho_inicial=16);
    bool remover() { return ListaIF<T>::buffer.remover_inicio(); }
};


 /* LISTA INSERE FIM */

template <typename T>
ListaIF<T>::ListaIF(int tamanho_inicial): buffer(tamanho_inicial) {}


template <typename T>
bool ListaIF<T>::inserir(T elemento) {
  // Expandir buffer, se cheio
  if (ListaIF<T>::buffer.cheio()) {
    // Criar novo buffer
    ListaIF<T>::buffer = BufferCircular<T>(ListaIF<T>::buffer, ListaIF<T>::buffer.tamanho() * 2);
  }
  // Inserir no fim
  ListaIF<T>::buffer.inserir_fim(elemento);
  return true;
}


template <typename T>
ListaIFRF<T>::ListaIFRF(int tamanho_inicial): ListaIF<T>(tamanho_inicial) {}

template <typename T>
ListaIFRI<T>::ListaIFRI(int tamanho_inicial): ListaIF<T>(tamanho_inicial) {}

#endif