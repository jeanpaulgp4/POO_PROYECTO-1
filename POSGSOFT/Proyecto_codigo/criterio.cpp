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

// esta funcion se encarga de pedirle los datos al usuario, y recibir el id para 
void Criterio::crearCriterio(int idCriterio){
	this->idCriterio = idCriterio;

	cout << " Digite la descripcion del criterio: " << endl;
	getline(cin, descripcionCriterio);

	cout << " Digite el porcentaje de la nota (ej. 15% = 0.15): " << endl;
	cin >> porcentajeNota;
}

void Criterio::mostrarCriterio(){
	cout << " Id: " << idCriterio << endl;
	cout << " Porcentaje nota: " << porcentajeNota << endl;
	cout << " Descripcion: " << descripcionCriterio << endl;
}