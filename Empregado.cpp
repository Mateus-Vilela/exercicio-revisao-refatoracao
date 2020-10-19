#include <iostream>
#include <string>
#include "Empregado.hpp"

const int HORAS_EXTRA_MINIMA = 8;

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

double Empregado::pagamentoMes(double horasTrabalhadas) {

  double t = horasTrabalhadas;

  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
  if (horasTrabalhadas > HORAS_EXTRA_MINIMA) {
    double x = horasTrabalhadas - HORAS_EXTRA_MINIMA;
    t += x / 2;
  }
  return t * salarioHora;
}
