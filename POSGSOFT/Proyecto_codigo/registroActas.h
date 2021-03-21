#ifndef REGISTROACTAS_H
#define REGISTROACTAS_H

#include <iostream>
#include <stdlib.h>
#include "acta.h"
#include <list>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::list;

// creacion de la clase RegistroActas
class RegistroActas{
// atributos de la clase RegistroActas
private:
	list<Acta> listaActas;
	
//metodos de la clase RegistroActas
public:
	RegistroActas();  // constructor de la clase RegistroActas por defectos
	void guardarActas();  // prototipo de funcion que se encarga de guardar un acta en la lista de actas
	void mostrarActas();  // prototipo de funcion que se encarga de mostrar las actas creadas
	void eliminarActa();  // protipo de funcion que se encarga de eliminar un acta
	void modificarActa();  // prototipo de funcion que se encarga de modificar un acta
	void cerrarActaTotal();  // prototipo de funcion que se encarga de cerrar un acta

};

#endif