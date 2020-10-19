#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
    double quotaMensalVendas;
	
  public:
    Vendedor(std::string _nome, double _salarioHora, double _quotaMensal):
      Empregado(_nome, _salarioHora), quotaMensalVendas(_quotaMensal) {}
    virtual ~Vendedor() {};
    
    void Set_quotaMensalVendas(double _quotaMensalVendas);
    double Get_quotaMensalVendas() const;

	double quotaTotalAnual() const;

    virtual void Print_Dados(double horasTrabalhadas) const override;

};

#endif