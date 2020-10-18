#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  public:
    std::string nome;
    double salarioHora;
    //double quotaMensalVendas;

  //public:
    SetName();
    GetName();
    double pagamentoMes(double horasTrabalhadas){

      double t = horasTrabalhadas;

      //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
      return t * salarioHora;
    };

};

#endif
