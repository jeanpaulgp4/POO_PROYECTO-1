#include <iostream>
#include "calificacion.h"

// implementacion del constructor por defecto de la clase Calificacion
Calificacion::Calificacion(){
}

//implementacion del constructor con los atributos de la clase Calificacion
Calificacion::Calificacion(Criterio criterio, string comentario, string comentario2, float notaJuradoUno, float notaJuradoDos){
	this->criterio = criterio;
	this->comentario = comentario;
	this->comentario2 = comentario2;
	this->notaJuradoUno = notaJuradoUno;
	this->notaJuradoDos = notaJuradoDos;
}

// se implementa el metodo de crear una  calificacion, lo que hace es pedirle los datos al usuario
void Calificacion::crearCalificacion(int idCalificacion){
	criterio.crearCriterio(idCalificacion);

	cout << " Digite la nota 1: " << endl;
	cin >> this->notaJuradoUno;

	cout << " Digite la nota 2: " << endl;
	cin >> this->notaJuradoDos;

	cout << " Comentario del jurado 1: " << endl;
	fflush(stdin);
	getline(cin, this->comentario);  //  guarda los comentarios del jurado 1 que se hagan sobre las nota
	fflush(stdin);

	cout << " Comentario del jurado 2: " << endl;
	fflush(stdin);
	getline(cin, comentario2);  // guarda los comentarios del jurado 2 que se hagan sobre la nota
	fflush(stdin);
}

// este metodo se encarga de imprimir la calificacion
void Calificacion::mostrarCalificacion(){
	criterio.mostrarCriterio();  // se hace el llamado al metodo de mostrar criterio para que se pueda observar tanto la descripcion como el porcentaje de la nota
	cout << " Nota Jurado 1: " << notaJuradoUno << endl;
	cout << " Nota Jurado 2: " << notaJuradoDos << endl;
	cout << " Comentario sobre las notas: " << comentario << endl;
}


// funcion que se encarga de retornar el valor de la nota de jurado 1
float Calificacion::getNotaJuradoUno(){
	return notaJuradoUno;
}

// funcion que se encarga de retornar el valor de la nota de jurado 2
float Calificacion::getNotaJuradoDos(){
	return notaJuradoDos;
}

// funcion que se encarga de retornar el valor del porcentaje de la nota
float Calificacion::getPorcentajeNotaCriterio(){
	return criterio.getPorcentajeNota();
}

int Calificacion::getIdCriterio(){
	return criterio.getIdCriterio();
}

string Calificacion::getDescripcionCriterio(){
	return criterio.getDescripcionCriterio();
}

string Calificacion::getComentariosJurado1(){
	return comentario;
}

string Calificacion::getComentariosJurado2(){
	return comentario2;
}
