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
	string comentario;
	float notaJuradoUno;
	float notaJuradoDos;
	
//metodos de la clase Calificacion
public:
	Calificacion();  // constructor de la clase Calificacion por defecto
	Calificacion(Criterio, string, float, float);  // constructor de la clase Calificacion con los atributos
<<<<<<< HEAD
	void crearCalificacion();  // funcion que se encarga de crear una calificacion  
	void mostrarCalificacion();  // funcion que se encarga de imprimir una calificacion
=======
	void crearCalificacion();
>>>>>>> 9855579f61879f13fccfdd1b9b52d0c9c42e1d1f
};

#endif