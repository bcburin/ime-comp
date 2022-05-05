#ifndef SUPERPODER_H
#define SUPERPODER_H

#include <string>
#include <vector>
#include <ostream>

/* DECLARACOES */

class Superpoder {
  private:
    std::string m_nome;
    int m_categoria;
  public:
    Superpoder(std::string nome, int categoria);
    inline std::string nome() const;
    inline int categoria() const;
    static std::vector<Superpoder> lista;
};

std::ostream& operator<<(std::ostream& os, const Superpoder& superpoder);

/* DEFINICOES */

Superpoder::Superpoder(std::string nome, int categoria): m_nome(nome), m_categoria(categoria) {}

std::string Superpoder::nome() const { return m_nome; }

int Superpoder::categoria() const { return m_categoria; }

std::ostream& operator<<(std::ostream& os, const Superpoder& superpoder) {
  return os << superpoder.nome() << " (" << superpoder.categoria() << ")";
}

std::vector<Superpoder> Superpoder::lista = {
  Superpoder("voar", 3),
  Superpoder("forca", 5),
  Superpoder("visao raio x", 4),
  Superpoder("sopro congenlante", 4),
  Superpoder("soltar teia", 3),
  Superpoder("andar em paredes", 2),
  Superpoder("sentido apurado", 1)
};

#endif