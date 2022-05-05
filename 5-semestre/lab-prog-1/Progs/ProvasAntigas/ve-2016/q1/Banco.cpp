#include "Banco.h"
#include <algorithm>

Banco::Banco(int capacidade_maxima)
: m_capacidade_maxima(capacidade_maxima), m_numero_clientes(0) {}

int Banco::capacidade_maxima() const { return m_capacidade_maxima; }

int Banco::numero_clientes() const { return m_numero_clientes; }

bool Banco::adicionarCliente(const ClienteComum& cliente_comum) {
  if (numero_clientes() == m_capacidade_maxima) return false;
  clientes_comuns.push_back(cliente_comum);
  ++m_numero_clientes;
  return true;
}

bool Banco::adicionarCliente(const ClientePreferencial& cliente_preferencial) {
  if (numero_clientes() == m_capacidade_maxima) return false;
  clientes_preferenciais.push_back(cliente_preferencial);
  ++m_numero_clientes;
  return true;
}

#include <iostream>
stats Banco::simular() {
  stats sim_stats = {0, 0, 0, 0};

  // Ordenar filas
  std::sort(clientes_comuns.begin(), clientes_comuns.end());
  std::sort(clientes_preferenciais.begin(), clientes_preferenciais.end());

  // Simular fila de clientes comuns
  int t = clientes_comuns.front().tempo_chegada();
  while( !clientes_comuns.empty() ) {
    // Atravessar a lista ate encontrar um cliente que nao tenha desistido
    while (t - clientes_comuns.front().tempo_chegada() > clientes_comuns.front().tempo_espera_maximo() ) {
      // Retirar desistente da fila
      clientes_comuns.pop_front();
      // incrementar contador de desistentes
      ++sim_stats.desistentes;
      // Sair se fila vazia
      if ( clientes_comuns.empty() ) break;
    }
    // Se a lista estiver vazia, sair da simulacao
    if ( clientes_comuns.empty() ) break;
    // Caso contrario, obter cliente na frente da lista e retira-lo da fila
    ClienteComum atual = clientes_comuns.front();
    clientes_comuns.pop_front();
    // Se o cliente ainda nao tiver chagado, espera-lo
    if (t < atual.tempo_chegada()) t = atual.tempo_chegada();
    // Executar servico desse cliente e incrementar variaveis da simulacao
    t += atual.duracao_servico();
    sim_stats.tempo_atendimento_total += atual.duracao_servico();
    ++sim_stats.numero_clientes_atendidos;
  }

  // Simular fila de clientes preferenciais
  while(!clientes_preferenciais.empty()) {
    // Retirar cliente da frente da fila
    ClientePreferencial atual = clientes_preferenciais.front();
    clientes_preferenciais.pop_front();
    // Atender cliente
    sim_stats.tempo_atendimento_total += atual.duracao_servico();
    ++sim_stats.numero_clientes_atendidos;
  }

  // Calcular tempo medio de atendimento
  sim_stats.tempo_medio = ((double)sim_stats.tempo_atendimento_total)/sim_stats.numero_clientes_atendidos;

  return sim_stats;
}
