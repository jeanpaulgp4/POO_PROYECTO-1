#ifndef ACTA_H
#define ACTA_H

#include <iostream>
#include <stdlib.h>
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
	string fecha;
	string autor;
	string nombreTrabajo;
	string tipoTrabajo;
	string periodo;
	Persona director;
	Persona codirector;
	Persona juradoUno;
	Persona juradoDos;
	string estadoProyecto;
	string comentarioAprobacion;
	string estadoActa;
	string procesoActa;
	list<Calificacion> listaCalificaciones;

//metodos de la clase Acta
public:
	Acta();  // constructor de la clase Acta por defecto
	Acta(int, string, string, string, string, string, Persona, Persona, Persona, Persona, string, string, string, string);  // constructor de la clase Acta con los atributos
};

#endif