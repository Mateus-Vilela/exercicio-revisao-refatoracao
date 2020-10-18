#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    double quotaMensalVendas;
	double quotaTotalAnual() {
	  return quotaMensalVendas * 12;
	}

};

