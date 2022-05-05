#include "Cliente.h"

/* CLIENTE */

Cliente::Cliente(std::string nome, int tempo_chegada, int duracao_servico)
: m_nome(nome), m_tempo_chegada(tempo_chegada), m_duracao_servico(duracao_servico) {}

bool operator<(const Cliente& c1, const Cliente& c2) { return c1.tempo_chegada() < c2.tempo_chegada(); }


/* CLIENTE COMUM */

ClienteComum::ClienteComum(std::string nome, int tempo_chegada, int duracao_servico, int tempo_espera_maximo)
: Cliente(nome, tempo_chegada, duracao_servico), 
  m_tempo_espera_maximo(tempo_espera_maximo) {}


/* CLIENTE PREFERENCIAL */

ClientePreferencial::ClientePreferencial(std::string nome, int tempo_chegada, int duracao_servico)
: Cliente(nome, tempo_chegada, duracao_servico) {}
