#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;


class Persona{
	private:
		string nombre;
		string apellido;
		string email;
		int id;
		int telefono;
	public:
		Persona();
		Persona(string, string, string, int, int);
};

#endif