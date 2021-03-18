#include "calificacion.h"

// implementacion del constructor por defecto de la clase Calificacion
Calificacion::Calificacion(){
}

//implementacion del constructor con los atributos de la clase Calificacion
Calificacion::Calificacion(Criterio criterio, string comentario, float notaJuradoUno, float notaJuradoDos, float notaParcialJurados){
	this->criterio = criterio;
	this->comentario = comentario;
	this->notaJuradoUno = notaJuradoUno;
	this->notaJuradoDos = notaJuradoDos;
	this->notaParcialJurados = notaParcialJurados;
}