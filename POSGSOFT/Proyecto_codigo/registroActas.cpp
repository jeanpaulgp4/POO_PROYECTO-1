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
	int idBorrarActa;               //falto validar estado acta URGENTE!!!!!!!
	cout << " Digite el id del acta que desea borrar: " << endl;
	cin >> idBorrarActa;
	list<Acta>::iterator itBorrarActa;
	for( itBorrarActa = listaActas.begin(); itBorrarActa != listaActas.end(); itBorrarActa++){
		if(idBorrarActa == itBorrarActa->getIdActa()){
			if(itBorrarActa->getEstadoActa()!= "Cerrado"){
				listaActas.erase(itBorrarActa);
				cout << " Esta acta ha sido eliminada con exito!" << endl;
			}
			else{
				cout << " El acta esta cerrada ya no se puede eliminar " << endl;
			}
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
			itActaCerrar->crearTxtActaCerrada();
			cout << " Acta cerrada correctamente " << endl;
		}
	}
}

// funcion que retorna cantidad de trabajos tipo Aplicado y cuales
void RegistroActas::cantTrabajosAplicado(){
	int acumAplicado = 0;
	list<Acta>::iterator it;
	for( it = listaActas.begin(); it != listaActas.end(); it++ ){
		if(it->getTipoTrabajo() == "Aplicado"){
			cout << "los trabajos Id de tipo aplicado son: " << it->getIdActa() << endl;
			acumAplicado++;
		}
	}
	cout << "La cantidad de trabajos tipo aplicado es: " << acumAplicado << endl;
}

// funcion que retorna cantidad de trabajos tipo investigacion y cuales
void RegistroActas::cantTrabajosInvestigacion(){
	int acumInvestigacion = 0;
	list<Acta>::iterator it;
	for( it = listaActas.begin(); it != listaActas.end(); it++ ){
		if(it->getTipoTrabajo() == "Investigacion"){
			cout << "los trabajos de tipo Investigacion organizados por id son: " << it->getIdActa() << endl;
			acumInvestigacion++;
		}
	}
	cout << "La cantidad de trabajos tipo Investigacion es: " << acumInvestigacion << endl;
}

// funcion que retorna cantidad de trabajos dirigidos por un director
void RegistroActas::cantTrabajosDirigidos(){
	int acumDireccionTrabajos = 0;
	string nombreBusqueda;
	cout << " Digite el nombre del director: " << endl;
	cin >> nombreBusqueda;
	list<Acta>::iterator it;
	for( it = listaActas.begin(); it != listaActas.end(); it++ ){
		if(it->getNombreDirector() == nombreBusqueda){
			acumDireccionTrabajos++;
		}
	}
	cout << "La cantidad de trabajos dirigidos por este docente es: " << acumDireccionTrabajos << endl;
}

// funcion que retorna cantidad de trabajos dirigidos y cuales actas con su Idacta por un jurado con su nombre 
void RegistroActas::cantTrabajosJurado(){
	int acumTrabajosJurado = 0;
	string nombreBusqueda;
	cout << " Digite el nombre del jurado: " << endl;
	cin >> nombreBusqueda;

	list<Acta>::iterator it;
	for( it = listaActas.begin(); it != listaActas.end(); it++ ){
		if(it->getNombrejuradoUno()  == nombreBusqueda){
			cout << "los trabajos que ha participado este jurado sus id actas son: " << it->getIdActa() << endl;
			acumTrabajosJurado++;
		}
		if(it->getNombrejuradoDos() == nombreBusqueda){
			cout << "los trabajos que ha participado este jurado sus id actas son: " << it->getIdActa() << endl;
			acumTrabajosJurado++;
		}
	}
	cout << "La cantidad de trabajos que ha participado este jurado es: " << acumTrabajosJurado << endl;
}

//Funcion que imprime los Id y nombre de jurado sin repetir de todas las actas
void RegistroActas::participacionJuradoActas(){
	bool validador1 = true, validador2 = true;
	list<int> listaIdJurados;
	list<Acta>::iterator it;
	for( it = listaActas.begin(); it != listaActas.end(); it++ ){
		list<int>::iterator it2;
		for (it2 = listaIdJurados.begin(); it2 != listaIdJurados.end(); it2++ ){
			if(*it2 == it->getIdjuradoUno()){
				validador1 = false;
			}
			if(*it2 == it->getIdjuradoDos()){
				validador2 = false;
			}
		}
		if(validador1){
			listaIdJurados.push_back(it->getIdjuradoUno());
			cout << "Nombre: " << it->getNombrejuradoUno() << endl;
			cout << "Id: " << it->getIdjuradoUno() << endl;
		}
		if(validador2){
			listaIdJurados.push_back(it->getIdjuradoDos());
			cout << "Nombre: " << it->getNombrejuradoDos() << endl;
			cout << "Id: " << it->getIdjuradoDos() << endl;
		}
	}
	listaIdJurados.clear();
}
//Funcion que imprime los Id de las actas de estado "Pendiente"
void RegistroActas::actasPendientes(){
	int acumInvestigacion;
	list<Acta>::iterator it;
	for( it = listaActas.begin(); it != listaActas.end(); it++ ){
		if(it->getEstadoProyecto() == "Pendiente"){
			cout << " las actas de los trabajos de grado pendientes son: " << it->getIdActa() << endl;
		}
	}
}

//Funcion que imprime los Id de las actas de estado "Rechazadas o reprobadas"
void RegistroActas::actasReprobadas(){
	int acumInvestigacion;
	list<Acta>::iterator it;
	for( it = listaActas.begin(); it != listaActas.end(); it++ ){
		if(it->getEstadoProyecto() == "Reprobado"){
			cout << " las actas de los trabajos de grado reprobadas son: " << it->getIdActa() << endl;
		}
	}
}
//Funcion que imprime el id y nombre de los jurados internos
void RegistroActas::juradosInternos(){
	list<Acta>::iterator it;
	for( it = listaActas.begin(); it != listaActas.end(); it++ ){
		if(it->getRoljuradoUno() == "Jurado Interno"){
			cout << " Id del jurado interno: " << it->getIdjuradoUno() << endl;
			cout << " Nombre del jurado interno: " << it->getNombrejuradoUno() << endl;
		}
		if(it->getRoljuradoDos() == "Jurado Interno"){
			cout << " Id del jurado interno: " << it->getIdjuradoDos() << endl;
			cout << " Nombre del jurado interno: " << it->getNombrejuradoDos() << endl;
		}

	}
}
//Funcion que imprime el id y nombre de los jurados externos
void RegistroActas::juradosExternos(){
	list<Acta>::iterator it;
	for( it = listaActas.begin(); it != listaActas.end(); it++ ){
		if(it->getRoljuradoUno() == "Jurado Externo"){
			cout << " Id del jurado externo: " << it->getIdjuradoUno() << endl;
			cout << " Nombre del jurado externo: " << it->getNombrejuradoUno() << endl;
		}
		if(it->getRoljuradoDos() == "Jurado Externo"){
			cout << " Id del jurado externo: " << it->getIdjuradoDos() << endl;
			cout << " Nombre del jurado externo: " << it->getNombrejuradoDos() << endl;
		}

	}
}

void RegistroActas::mostrarCriteriosActa(){
	int idActaImprimirCriterios;
	cout << " Digite el id del acta al cual desea conocer sus criterios: " << endl;
	cin >> idActaImprimirCriterios;

	list<Acta>::iterator itActa;
	for( itActa = listaActas.begin(); itActa != listaActas.end(); itActa++ ){
		if( idActaImprimirCriterios == itActa->getIdActa() ){
			itActa->mostrarCriteriosEvaluacion();
		}
		else{
			cout << " No se encontro el acta " << endl;
		}
	}
}