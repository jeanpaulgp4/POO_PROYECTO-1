#ifndef CRITERIO_H
#define CRITERIO_H

#include <iostream>
#include <stdlib.h>
#include <string>

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
	void crearCriterio(int idCriterio);  // funcion que se encarga de pedir los datos al usuario, sobre la iformacion del criterio que se quiere crear
	void mostrarCriterio();  // funcion que se encarga de mostrar el criterio creado
	float getPorcentajeNota(); // prototipo de funcion que se encarga de retornar el valor del porcentaje de la nota
	
};

#endif