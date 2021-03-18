#include "calificacion.h"

// implementacion del constructor por defecto de la clase Calificacion
Calificacion::Calificacion(){
}

//implementacion del constructor con los atributos de la clase Calificacion
Calificacion::Calificacion(Criterio criterio, string comentario, float notaJuradoUno, float notaJuradoDos){
	this->criterio = criterio;
	this->comentario = comentario;
	this->notaJuradoUno = notaJuradoUno;
	this->notaJuradoDos = notaJuradoDos;
}

void Calificacion::crearCalificacion(){
	Criterio criterio;

	cout << " Digite un comentario sobre la nota dada: " << endl;
	cin >> this->comentario;

	cout << " Digite su nota: " << endl;
	cin >> this->notaJuradoUno;

	cout << " Digite su nota: " << endl;
	cin >> this->notaJuradoDos;
}
