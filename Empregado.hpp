#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  private:
    std::string nome;
    double salarioHora;

  public:
    void SetName(std::string name);
    std::string GetName() const;

    void Set_SalarioHora(double salario);
    double Get_SalarioHora() const;
    
    double pagamentoMes(double horasTrabalhadas);

    //virtual void Print_Dados(double horasTrabalhadas);

};

#endif