#include <iostream>
#include <string>
#include "Empregado.hpp"

const int MINIMO_HORAS = 8;
const double TAXA_HORA_EXTRA = 0.5;

void Empregado::SetName(std::string name) {
  nome = name;
}

std::string Empregado::GetName() const {
  return nome;
}

void Empregado::Set_SalarioHora(double salario) {
  salarioHora = salario;
}

double Empregado::Get_SalarioHora() const {
  return salarioHora;
}

double Empregado::pagamentoMes(double horasTrabalhadas) const {

  double taxa_total = horasTrabalhadas;

  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
  if (horasTrabalhadas > MINIMO_HORAS) {
    double horas_extras = horasTrabalhadas - MINIMO_HORAS;
    taxa_total += horas_extras * TAXA_HORA_EXTRA;
  }
  return taxa_total * salarioHora;
}
