#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

  Engenheiro* eng1 = new Engenheiro("Joao Snow", 35, 3);
  eng1->Print_Dados(9.5);
  
  Engenheiro* eng2 = new Engenheiro("Daniela Targaryen", 30, 1);
  eng2->Print_Dados(8);
  
  Engenheiro* eng3 = new Engenheiro("Bruno Stark", 30, 2);
  eng3->Print_Dados(8);
  
  
  Vendedor* vend1 = new Vendedor("Tonho Lannister", 20, 5000);
  vend1->Print_Dados(6);
  
  Vendedor* vend2 = new Vendedor("Jose Mormont", 25, 3000);
  vend2->Print_Dados(8);
	
  Vendedor* vend3 = new Vendedor("Sonia Stark", 30, 4000);
  vend3->Print_Dados(8);

  delete eng1;
  delete eng2;
  delete eng3;
  delete vend1;
  delete vend2;
  delete vend3;
  return 0;
}