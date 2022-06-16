#ifndef NONACCI_H
#define NONACCI_H

#include <ostream>
#include <utility>
#include <stdexcept>
#include <unordered_map>

using std::ostream;
using std::unordered_map;

template<size_t N = 2>
struct Nonacci { static unordered_map<size_t, size_t> memo; };

template<size_t N = 2>
size_t operator << (const Nonacci<N>&, size_t);


/* IMPLEMENTACOES */

template<size_t N>
unordered_map<size_t, size_t> Nonacci<N>::memo = {};


template<size_t N>
size_t operator << (const Nonacci<N>& nonacci, size_t n) {
  // Validar entrada
  if(n < 1) throw std::invalid_argument("Entrada deve ser maior ou igual a 1.");

  // Casos base
  if(n <= N) return 1;

  // Verificar se valor da serie ja foi calculado antes
  // Se sim, retornar resultado armazenado
  if(Nonacci<N>::memo.count(n)) return Nonacci<N>::memo[n];

  // Se esse valor nunca foi calculado antes, realizar soma
  size_t soma = 0;
  for(int i = n-N; i != n; ++i) soma += (nonacci << i);

  // Armazenar resultado no memo e retornar soma
  Nonacci<N>::memo[n] = soma;
  return soma;
}

#endif