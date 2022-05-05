#ifndef BANCO_H
#define BANCO_H

#include "Cliente.h"
#include <deque>

struct stats {
  int tempo_atendimento_total;
  int numero_clientes_atendidos;
  double tempo_medio;
  int desistentes;
};

class Banco {
  private:
    std::deque<ClienteComum> clientes_comuns;
    std::deque<ClientePreferencial> clientes_preferenciais;
    int m_capacidade_maxima;
    int m_numero_clientes;
  public:
    Banco(int capacidade_maxima);
    inline int capacidade_maxima() const;
    inline int numero_clientes() const;
    bool adicionarCliente(const ClienteComum& cliente_comum);
    bool adicionarCliente(const ClientePreferencial& cliente_preferencial);
    stats simular();
};

#endif