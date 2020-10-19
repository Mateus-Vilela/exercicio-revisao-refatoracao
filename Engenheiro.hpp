#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
    int projetos;

  public:
    void Set_Projetos(int _projetos);
    int Get_Projetos() const;

    //virtual void Print_Dados(double horasTrabalhadas) override;

};

#endif