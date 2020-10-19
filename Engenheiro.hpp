#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
    int projetos;

  public:
    Engenheiro(std::string _nome, double _salarioHora, int _projetos):
      Empregado(_nome, _salarioHora), projetos(_projetos) {}
    virtual ~Engenheiro() {};
    
    void Set_Projetos(int _projetos);
    int Get_Projetos() const;

    virtual void Print_Dados(double horasTrabalhadas) const override;

};

#endif