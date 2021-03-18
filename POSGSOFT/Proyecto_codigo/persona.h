#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <stdlib.h>

using std::string;
using std::cin;
using std::cout;
using std::endl;

// creacion de la clase Persona
class Persona{
// atributos de la clase Persona
private:
	string nombres;
	string apellidos;
	string email;
	int idPersona;
	int telefono;
	string rolPersona;

//metodos de la clase Persona
public:
	Persona();  // constructor de la clase persona por defecto
	Persona(string, string, string, int, int, string);  // constructor de la clase persona con los atributos
};

#endif