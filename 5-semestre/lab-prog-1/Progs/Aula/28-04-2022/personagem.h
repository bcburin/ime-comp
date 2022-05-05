#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
#include <vector>
#include <ostream>
#include "superpoder.h"

/* DECLARACOES */

class Personagem {
  private:
    std::string m_nome;
    std::string m_nome_vida_real;
    std::vector<Superpoder*> m_superpoderes;
    double m_poder_total;
  public:
    Personagem(std::string nome, std::string nome_vida_real);
    bool adicionar_superpoder(Superpoder& superpoder);
    virtual double poder_total() const;
    inline std::string nome() const;
    inline std::string nome_vida_real() const;
};


std::ostream& operator<<(std::ostream& os, const Personagem& personagem);


class SuperHeroi: public Personagem {
  public:
    SuperHeroi(std::string nome, std::string nome_vida_real);
    double poder_total() override;
};


class Vilao: public Personagem {
  private:
    int m_tempo_de_prisao;
  public:
    Vilao(std::string nome, std::string nome_vida_real, int tempo_de_prisao);
    double poder_total() override;
};

/* DEFINICOES */

Personagem::Personagem(std::string nome, std::string nome_vida_real)
: m_nome(nome), m_nome_vida_real(nome_vida_real), m_poder_total(0) {}

bool Personagem::adicionar_superpoder(Superpoder& superpoder) {
  // Checar valor maximo de poders
  if (m_superpoderes.size() == 4)
    return false;

  // Adicionar poder
  m_superpoderes.push_back(&superpoder);
  m_poder_total += superpoder.categoria();
  return true;
}

double Personagem::poder_total() const { return m_poder_total; }

std::string Personagem::nome() const { return m_nome; }

std::string Personagem::nome_vida_real() const { return m_nome_vida_real; }

std::ostream& operator<<(std::ostream& os, const Personagem& personagem) {
  os << personagem.nome_vida_real() << " a.k.a. " <<  personagem.nome() 
     << " (" << personagem.poder_total() << ")";
  return os;
}


/* SUPER HEROI */

SuperHeroi::SuperHeroi(std::string nome, std::string nome_vida_real): Personagem(nome, nome_vida_real) {}

double poder_total() override { return Personagem::poder_total()*1.1; }


/* VILAO */

Vilao::Vilao(std::string nome, std::string nome_vida_real, int tempo_de_prisao)
: Personagem(nome, nome_vida_real), m_tempo_de_prisao(tempo_de_prisao) {}

double Vilao::poder_total() override {
  return Personagem::poder_total() * (1 + 0.01*m_tempo_de_prisao);
}

#endif