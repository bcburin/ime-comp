#ifndef EMPREGADO_H
#define EMPREGADO_H

#include "contavel.h"
#include <string>

class empregado: public contavel {
  private:
    const std::string nome_;
    double salario_;
    int ramal_;
  public:
    empregado(std::string nome, double salario, int ramal);
    std::string nome() const { return nome_; }
    void alterar_salario(double novo_salario) { salario_ = novo_salario; }
    void alterar_ramal(int novo_ramal) { ramal_ = novo_ramal; }
    double salario() const { return salario_; }
    int ramal() const { return ramal_; }
    int max() const override { return 50; }
    int min() const override { return 10; }
};

#endif