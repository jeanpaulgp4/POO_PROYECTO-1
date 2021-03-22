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
	float notaFinal;
	list<Calificacion> listaCalificaciones;


//metodos de la clase Acta
public:
	Acta();  // constructor de la clase Acta por defecto
	Acta(int, string, Persona, string, string, string, Persona, Persona, Persona, Persona, string, string, string, float);  // constructor de la clase Acta con los atributos
	void crearActa(int idActa);  // prototipo de la funcion que se encarga de crear un acta
	void cerrarActa();  // prototipo de la funcion que se encarga de cerrar un acta
	void mostrarActa();  // prototipo de funcion que se encarga de mostrar los datos por pantalla de una acta creada
	void agregarCalificaciones(); // prototipo de funcion que se encarga de agregar las calificaciones a una acta
	void mostrarCalificaciones(); // prototipo de funcion que se encarga de mostrar por pantalla las calificaciones
	void calcularNotaFinal(); // prototipo de funcion que se encarga de calcular la nota final del proyecto
	int getIdActa();  // prototipo de funcion que se encarga de retornar el id del acta
	float getNotaFinal();  // prototipo de funcion que se encarga de retornar la nota final
	string getEstadoActa();  // prototipo de funcion que se encarga de retornar el estado del acta
	void setComentarioAprobacion();  // protipo de funcion que se encarga de agregar el comentario de aprobacion 
	void setEstadoProyecto(int indiceEstadoProyecto);  // prototipo de funcion que se encarga de poner el estado del proyecto
	void eliminarActa(); // prototipo de funcion que se encarga de eliminar un acta
	void crearTxtActaCerrada(); //Valida si el estado acta es cerrado para asi crear el txt
	string getcomentarioAprobacion();
	string getTipoTrabajo();
	string getNombreDirector();
	string getNombrejuradoUno();
	string getNombrejuradoDos();
	int getIdjuradoUno();
	int getIdjuradoDos();
	string getEstadoProyecto();
	string getRoljuradoUno();
	string getRoljuradoDos();
	void mostrarCriteriosEvaluacion();
}; 

#endif