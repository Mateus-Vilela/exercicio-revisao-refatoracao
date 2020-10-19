#include <iostream>
#include "Engenheiro.hpp"

void Engenheiro::Set_Projetos(int _projetos) {
  projetos = _projetos;
}

int Engenheiro::Get_Projetos() const {
  return projetos;
}

/*void Engenheiro::Print_Dados(double horasTrabalhadas) {
  std::cout << "Nome: " << this->GetName() << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << this->Get_Projetos() << std::endl;
  std::cout << std::endl;
}*/