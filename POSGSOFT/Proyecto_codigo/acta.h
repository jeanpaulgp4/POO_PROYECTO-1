#ifndef ACTA_H
#define ACTA_H

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "persona.h"
#include "calificacion.h"
#include <list>


using std::list;
using std::string;
using std::cin;
using std::cout;
using std::endl;


// creacion de la clase Acta
class Acta{
// atributos de la clase Acta
private:
	int idActa;
	string fecha, nombreTrabajo, tipoTrabajo, periodo;
	Persona autor, director, codirector, juradoUno, juradoDos;
	string estadoProyecto, comentarioAprobacion, estadoActa;
	bool estadoCodirector = false;
	list<Calificacion> listaCalificaciones;

//metodos de la clase Acta
public:
	Acta();  // constructor de la clase Acta por defecto
	Acta(int, string, Persona, string, string, string, Persona, Persona, Persona, Persona, string, string, string);  // constructor de la clase Acta con los atributos
	void crearActa(int idActa);  // prototipo de la funcion que se encarga de crear un acta
	void cerrarActa();  // prototipo de la funcion que se encarga de cerrar un acta
	void mostrarActa();  // prototipo de funcion que se encarga de mostrar los datos por pantalla de una acta creada
	void crearTxtActaCerrada(); //Valida si el estado acta es cerrado para asi crear el txt
}; 

#endif