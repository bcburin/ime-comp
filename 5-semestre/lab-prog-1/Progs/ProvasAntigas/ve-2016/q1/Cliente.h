#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
  private:
    std::string m_nome;
    int m_tempo_chegada;
    int m_duracao_servico;
  public:
    Cliente(std::string nome, int tempo_chegada, int duracao_servico);
    inline std::string nome() const { return m_nome; }
    inline int tempo_chegada() const { return m_tempo_chegada; }
    inline int duracao_servico() const { return m_duracao_servico; }
};

bool operator<(const Cliente& c1, const Cliente& c2);


class ClienteComum: public Cliente {
  private:
    int m_tempo_espera_maximo;
  public:
    ClienteComum(std::string nome, int tempo_chegada, int duracao_servico, int tempo_espera_maximo);
    inline int tempo_espera_maximo() const { return m_tempo_espera_maximo; }
};


struct ClientePreferencial: public Cliente {
  ClientePreferencial(std::string nome, int tempo_chegada, int duracao_servico);
};


#endif