#ifndef CALIFICACION_H
#define CALIFICACION_H

#include <string>
#include <iostream>
#include <stdlib.h>
#include "criterio.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

// creacion de la clase Calificacion
class Calificacion{
// atributos de la clase Calificacion
private:
	Criterio criterio;
	string comentario, comentario2;
	float notaJuradoUno;
	float notaJuradoDos;
	
//metodos de la clase Calificacion
public:
	Calificacion();  // constructor de la clase Calificacion por defecto
	Calificacion(Criterio, string, string, float, float);  // constructor de la clase Calificacion con los atributos
	void crearCalificacion(int idCalificacion);  // funcion que se encarga de crear una calificacion  
	void mostrarCalificacion();  // funcion que se encarga de imprimir una calificacion
	float getNotaJuradoUno();  // prototipo de funcion que se encarga de retornar el valor 
	float getNotaJuradoDos();  // prototipo de funcion que se encarga de retornar el valor
	float getPorcentajeNotaCriterio(); // prototipo de funcion que se encarga de retornar el valor del porcentaje que se utiliza en los criterios
};

#endif