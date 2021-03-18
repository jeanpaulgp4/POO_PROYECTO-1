#include "acta.h"

// implementacion del constructor por defecto de la clase Acta
Acta::Acta(){
}

// implementacion del constructor con los atributos de la clase Acta
Acta::Acta(int idActa, string fecha, string autor, string nombreTrabajo, string tipoTrabajo, string periodo, Persona director, Persona codirector, Persona juradoUno, Persona juradoDos, string estadoProyecto, string comentarioAprobacion, string estadoActa, string procesoActa){
	this->idActa = idActa;
	this->fecha = fecha;
	this->autor = autor;
	this->nombreTrabajo = nombreTrabajo;
	this->tipoTrabajo = tipoTrabajo;
	this->periodo = periodo;
	this->director = director;
	this->codirector = codirector;
	this->juradoUno = juradoUno;
	this->juradoDos = juradoDos;
	this->estadoProyecto = estadoProyecto;
	this->comentarioAprobacion = comentarioAprobacion;
	this->estadoActa = estadoActa;
	this->procesoActa = procesoActa;
}