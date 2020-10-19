#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
    double quotaMensalVendas;
	
  public:
    void Set_quotaMensalVendas(double _quotaMensalVendas);
    double Get_quotaMensalVendas() const;

	double quotaTotalAnual() const;

    //virtual void Print_Dados(double horasTrabalhadas) override;
};

#endif