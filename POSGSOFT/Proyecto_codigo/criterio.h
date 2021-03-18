#ifndef CRITERIO_H
#define CRITERIO_H

#include <iostream>
#include <stdlib.h>

using std::string;
using std::cin;
using std::cout;
using std::endl;

// creacion de la clase Criterio
class Criterio{
// atributos de la clase Criterio
private:
	int idCriterio;
	float porcentajeNota;
	string descripcionCriterio;
//metodos de la clase Criterio
public:
	Criterio();  // constructor de la clase Criterio por defecto
	Criterio(int, float, string);  // constructor de la clase Criterio con los atributos
};

#endif