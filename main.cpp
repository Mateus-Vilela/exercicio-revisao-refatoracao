#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

  Engenheiro eng1;
  eng1.SetName("Joao Snow");
  eng1.Set_SalarioHora(35);
  eng1.Set_Projetos(3); 
  std::cout << "Nome: " << eng1.GetName() << std::endl;
  std::cout << "Salario Mes: " << eng1.pagamentoMes(9.5) << std::endl;
  std::cout << "Projetos: " << eng1.Get_Projetos() << std::endl;
  std::cout << std::endl;
  //eng1.Print_Dados(9.5);
  
  Engenheiro eng2;
  eng2.SetName("Daniela Targaryen");
  eng2.Set_SalarioHora(30);
  eng2.Set_Projetos(1); 
  std::cout << "Nome: " << eng2.GetName() << std::endl;
  std::cout << "Salario Mes: " << eng2.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng2.Get_Projetos() << std::endl;  
  std::cout << std::endl;
  //eng2.Print_Dados(8);
  
  Engenheiro eng3;
  eng3.SetName("Bruno Stark");
  eng3.Set_SalarioHora(30);
  eng3.Set_Projetos(2); 
  std::cout << "Nome: " << eng3.GetName() << std::endl;
  std::cout << "Salario Mes: " << eng3.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng3.Get_Projetos() << std::endl;  
  std::cout << std::endl;
  //eng3.Print_Dados(8);
  
  
  Vendedor vend1;
  vend1.SetName("Tonho Lannister");
  vend1.Set_SalarioHora(20);
  vend1.Set_quotaMensalVendas(5000); 
  std::cout << "Nome: " << vend1.GetName() << std::endl;
  std::cout << "Salario Mes: " << vend1.pagamentoMes(6) << std::endl;  
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
  //vend1.Print_Dados(6);
  
  Vendedor vend2;
  vend2.SetName("Jose Mormont");
  vend2.Set_SalarioHora(25);
  vend2.Set_quotaMensalVendas(3000);
  std::cout << "Nome: " << vend2.GetName() << std::endl;
  std::cout << "Salario Mes: " << vend2.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
  //vend2.Print_Dados(8);
	
  Vendedor vend3;
  vend3.SetName("Sonia Stark");
  vend3.Set_SalarioHora(30);
  vend3.Set_quotaMensalVendas(4000);
  std::cout << "Nome: " << vend3.GetName() << std::endl;
  std::cout << "Salario Mes: " << vend3.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;
  //vend3.Print_Dados(8);

  return 0;
}