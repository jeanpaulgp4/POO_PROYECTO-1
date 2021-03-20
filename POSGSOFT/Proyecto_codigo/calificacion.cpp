#include <iostream>
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

// se implementa el metodo de crear una  calificacion, lo que hace es pedirle los datos al usuario
void Calificacion::crearCalificacion(){
	int salida = 1;  
	// este ciclo while, sirve para pedirle al usuario el numero del criterio que quier crear, y como unicamente son 8 posibles criterios, entonces no pueden digitar numeros ni menores a 0 ni mayores a 7
	while(salida == 1){

		int temp2 = criterio.opcionCriterio();

		if(temp2 < 0){
			cout << " Error!, no puede crear un criterio con numeros negativos." << endl;   // valida que el numero de criterio no sea menor a 0
			salida = 1;
		}
		else if(temp2 == 0){
			criterio.crearCriterio(0);  // el id del criterio en este caso se saca del numero de criterio que el usuario escogio, por eso se hace el llamado al metodo con el # que el usuario escogio
			salida = 0;
		}
		else if(temp2 == 1){
			criterio.crearCriterio(1);
			salida = 0;
		}
		else if(temp2 == 2){
			criterio.crearCriterio(2);
			salida = 0;
		}
		else if(temp2 == 3){
			criterio.crearCriterio(3);
			salida = 0;
		}
		else if(temp2 == 4){
			criterio.crearCriterio(4);
			salida = 0;
		}
		else if(temp2 == 5){
			criterio.crearCriterio(5);
			salida = 0;
		}
		else if(temp2 == 6){
			criterio.crearCriterio(6);
			salida = 0;
		}
		else if(temp2 == 7){
			criterio.crearCriterio(7);
			salida = 0;
		}
		else if(temp2 > 7){
			cout << " Error!, no se puede crear mas de 8 criterios" << endl;  // valida que el numero de criterio no sea mayor a 7
			salida = 1;
		}
	}

	cout << " Digite un comentario sobre la nota dada: " << endl;
	fflush(stdin);
	getline(cin, this->comentario);  //  guarda los comentarios que se hagan sobre las notas
	fflush(stdin);

	cout << " Digite la nota 1: " << endl;
	cin >> this->notaJuradoUno;

	cout << " Digite la nota 2: " << endl;
	cin >> this->notaJuradoDos;
}

// este metodo se encarga de imprimir la calificacion
void Calificacion::mostrarCalificacion(){
	criterio.mostrarCriterio();  // se hace el llamado al metodo de mostrar criterio para que se pueda observar tanto la descripcion como el porcentaje de la nota
	cout << " Nota Jurado 1: " << notaJuradoUno << endl;
	cout << " Nota Jurado 2: " << notaJuradoDos << endl;
	cout << " Comentario sobre las notas: " << comentario << endl;
}

