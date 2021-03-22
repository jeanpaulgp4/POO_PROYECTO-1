#include "criterio.h"

// implementacion del constructor por defecto de la clase Criterio
Criterio::Criterio(){
}

// implementacion del constructor con los atributos de la clase Criterio
Criterio::Criterio(int idCriterio, float porcentajeNota, string descripcionCriterio){
	this->idCriterio = idCriterio;
	this->porcentajeNota = porcentajeNota; 
	this->descripcionCriterio = descripcionCriterio;
}

// esta funcion se encarga de pedirle los datos al usuario, y recibir el id 
void Criterio::crearCriterio(int idCriterio){
	this->idCriterio = idCriterio;

	cout << " Digite el porcentaje de la nota (ej. 15% = 0.15): " << endl;
	cin >> porcentajeNota;

	cout << " Digite una descripcion: " << endl;
	fflush(stdin);
	getline(cin, descripcionCriterio);
	fflush(stdin);

}

// este metodo se encarga de imprimir un criterio
void Criterio::mostrarCriterio(){
	cout << " Descripcion: " << descripcionCriterio << endl;
	cout << " Id: " << idCriterio << endl;
	cout << " Porcentaje nota: " << porcentajeNota << endl;
}

// funcion que se encarga de retornar el valor del porcentaje de la nota
float Criterio::getPorcentajeNota(){
	return porcentajeNota;
}

string Criterio::getDescripcionCriterio(){
    return descripcionCriterio;
}

int Criterio::getIdCriterio(){
    return idCriterio;
}


