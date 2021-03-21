#include "registroActas.h"

//implementacion del constructor por defecto de la clase RegistroActas
RegistroActas::RegistroActas(){
}

// esta funcion crea un objeto de tipo Acta y hace el metodo de crear un acta, ademas de guardar el acta y las calificaciones en una lista
void RegistroActas::guardarActas(){
	Acta acta;
	acta.crearActa(listaActas.size());
	acta.agregarCalificaciones();
	acta.calcularNotaFinal();
	listaActas.push_back(acta);
}

// funcion que se encarga de recorrer la lista de actas y las muestra por pantalla
void RegistroActas::mostrarActas(){
	list<Acta>::iterator itActa;
	for( itActa = listaActas.begin(); itActa != listaActas.end(); itActa++ ){
		itActa->mostrarActa();
	}
}

// funcion que se encarga de recorrer una lista y elimina un acta dada su id
void RegistroActas::eliminarActa(){
	int idBorrarActa;
	cout << " Digite el id del acta que desea borrar: " << endl;
	cin >> idBorrarActa;
	list<Acta>::iterator itBorrarActa;
	for( itBorrarActa = listaActas.begin(); itBorrarActa != listaActas.end(); itBorrarActa++ ){
		if(idBorrarActa == itBorrarActa->getIdActa()){
			listaActas.erase(itBorrarActa);
			cout << " Esta acta ha sido eliminada con exito!" << endl;
		}
	}
}

// funcion que se encarga de modificar una acta
void RegistroActas::modificarActa(){
	int idModificarActa, opcionUsuario, salida = 1;
	cout << " Digite el id del acta que desea modificar: " << endl;
	cin >> idModificarActa;

	list<Acta>::iterator itModificarActa;
	for(itModificarActa = listaActas.begin(); itModificarActa != listaActas.end(); itModificarActa++ ){
		if( idModificarActa == itModificarActa->getIdActa() && itModificarActa->getEstadoActa() == "Abierto"){
			if( itModificarActa->getNotaFinal() >= 3.5 ){
				while(salida == 1){
					cout << " El estudiante tiene la nota minima para aprobar el proyecto, desea agregar un comentario de aprobacion? " << endl;
					cout << " Digite: \n 1. SI\n 2. NO " << endl;
					cin >> opcionUsuario;

					if( opcionUsuario < 1 ){
						cout << " Error, opcion no valida" << endl;
						salida = 1;
					}

					else if( opcionUsuario == 1 ){
						itModificarActa->setComentarioAprobacion();
						itModificarActa->setEstadoProyecto(1);
						salida = 0;
					}

					else if( opcionUsuario == 2 ){
						itModificarActa->setEstadoProyecto(2);
						salida = 0;
					}

					else if( opcionUsuario > 2){
						cout << " Error, opcion no valida" << endl;
						salida = 1;
					}

				}
				
			}
			else if( itModificarActa->getNotaFinal() < 3.5 ){
				itModificarActa->setEstadoProyecto(3);
			}
		}
		else{
			cout << " No se puede modificar el acta " << endl;
		}
	}
}

// funcion que se encarga de cerrar un acta, esto quiere decir que no se podra modificar despues
void RegistroActas::cerrarActaTotal(){
	int idCerrarActa; 
	cout << " Digite el id del acta que desea cerrar " << endl;
	cin >> idCerrarActa;

	list<Acta>::iterator itActaCerrar;
	for(itActaCerrar = listaActas.begin(); itActaCerrar != listaActas.end(); itActaCerrar++ ){
		if(idCerrarActa == itActaCerrar->getIdActa()){
			itActaCerrar->cerrarActa();
			cout << " Acta cerrada correctamente " << endl;
		}
	}
}

