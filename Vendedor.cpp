#include <iostream>
#include "Vendedor.hpp"

const int MESES_ANO = 12;

void Vendedor::Set_quotaMensalVendas(double _quotaMensalVendas) {
	quotaMensalVendas = _quotaMensalVendas;
}

double Vendedor::Get_quotaMensalVendas() const {
	return quotaMensalVendas;
}

double Vendedor::quotaTotalAnual() const {
	return quotaMensalVendas * MESES_ANO;
}

void Vendedor::Print_Dados(double horasTrabalhadas) const {
  std::cout << "Nome: " << this->GetName() << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes(horasTrabalhadas) << std::endl;  
  std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
  std::cout << std::endl;
}
