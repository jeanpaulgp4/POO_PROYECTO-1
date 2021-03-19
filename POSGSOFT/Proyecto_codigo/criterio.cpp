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

// este metodo se encarga de mostrarle al usuario las opciones, y retorna la opcion que el usuario escoge
int Criterio::opcionCriterio(){
	int temp;
	cout << "Digite el numero de criterio que quiere crear: \n 0. #1 \n 1. #2\n 2. #3\n 3. #4\n 4. #5 \n 5. #6\n 6. #7\n 7. #8\n" << endl;
	cin >> temp;

	return temp;
}

