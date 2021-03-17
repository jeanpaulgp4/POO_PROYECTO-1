#include "persona.h"

// constructor por defecto de la clase persona
Persona::Persona(){
}
//constructor con los atributos de la clase persona
Persona::Persona(string nombre, string apellido, string email, int id, int telefono){
	this->nombre = nombre;
	this->apellido = apellido;
	this->email = email;
	this->id = id;
	this->telefono = telefono;
}

