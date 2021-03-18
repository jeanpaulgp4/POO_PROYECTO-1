#include "persona.h"

//implementacion del constructor por defecto
Persona::Persona(){
}

// implementacion del constructor de la clase con los atributos
Persona::Persona(string nombres, string apellidos, string email, int idPersona, int telefono, string rolPersona){
	this->nombres= nombres;
	this->apellidos = apellidos;
	this->email = email;
	this->idPersona = idPersona;
	this->telefono = telefono;
	this->rolPersona = rolPersona;
}
