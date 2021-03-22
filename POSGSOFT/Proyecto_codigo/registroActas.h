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
	void cantTrabajosAplicado(); //Funcion que retorna la cantidad de trabajos de tipo aplicado y cuales actas con su Idacta
	void cantTrabajosInvestigacion(); //Funcion que retorna la cantidad de trabajos de tipo investigacion y cuales actas con su Idacta
	void cantTrabajosDirigidos(); // Funcion que retorna cantidad de trabajos dirigidos por un director con el nombre del director
	void cantTrabajosJurado(); // Funcion que retorna cantidad de trabajos dirigidos y cuales actas con su Idacta por un jurado con su nombre 
	void participacionJuradoActas(); //Funcion que imprime los Id y nombre de jurado sin repetir de todas las actas
	void actasPendientes(); // Funcion que imprime los Id de las actas de estado "Pendiente"
	void actasReprobadas(); // Funcion que imprime los Id de las actas de estado "Rechazadas o reprobadas"
	void juradosInternos(); // Funcion que imprime el id y nombre de los jurados internos
	void juradosExternos(); // Funcion que imprime el id y nombre de los jurados externos
	void mostrarCriteriosActa(); //Funcion que imprime los criterios de acta con el id del acta

};

#endif