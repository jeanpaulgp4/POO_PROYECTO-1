#include "acta.h"

// implementacion del constructor por defecto de la clase Acta
Acta::Acta(){
}

// implementacion del constructor con los atributos de la clase Acta
Acta::Acta(int idActa, string fecha, Persona autor, string nombreTrabajo, string tipoTrabajo, string periodo, Persona director, Persona codirector, Persona juradoUno, Persona juradoDos, string estadoProyecto, string comentarioAprobacion, string estadoActa){
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
}


// metodo que se encarga de crear el acta, es decir, le pide los datos al usuario e inicializa algunos valores.
void Acta::crearActa(int idActa){
	int opcionUsuarioCodirector, opcionUsuario;  // opcionUsuarioCodirector se utiliza para saber si el proyecto tiene o no codirector || opcionUsuario se utiliza para conocer cual es la opcion que el usuario va a escoger al escoger el tipo de trabajo
	this->idActa = idActa;
	int salida = 1, salida2 = 1;  // estas variables se utilizan para saber cuando permancer en los ciclos y cuando debe salirse
	cout << " Digite la fecha: " << endl;
	fflush(stdin);  
	getline(cin, fecha);
	fflush(stdin);

	cout << " Digite la informacion del autor " << endl;
	autor.crearPersona(3);  // se crea un autor de tipo persona, y se le pasa por parametro el entero que hace referencia al estudiante

	fflush(stdin);
	cout << " Digite el nombre del trabajo: " << endl;
	getline(cin, nombreTrabajo);
	fflush(stdin);

	while(salida2 == 1){
		// se hace una validacion con condicionales, esto se hace para evitar que el usuario pueda digitar algo distinto a Investigacion o Aplicado
		cout << " Digite alguna de estas opciones sobre tipo de trabajo:\n 1. Investigacion\n 2. Aplicado\n" << endl;  
		cin >> opcionUsuario;
		if(opcionUsuario < 1){
			cout << " Error, esta opcion no es valida" << endl;  // validacion para que el usuario no pueda digitar un numero menor a 1	
			salida2 = 1;
		}
		else if(opcionUsuario == 1){
			tipoTrabajo = "Investigacion";
			salida2 = 0;
		} 
		else if(opcionUsuario == 2){
			tipoTrabajo = "Aplicado";
			salida2 = 0;
		}
		else if(opcionUsuario > 2){
			cout << " Error!, esta opcion no es valida" << endl;  // validacion para que el usuario no pueda digitar un numero mayor a 2
			salida2 = 1;
		}
	}
	
	fflush(stdin);
	cout << " Digite el periodo: " << endl;
	getline(cin, periodo);
	fflush(stdin);

	cout << " Digite la informacion del Director: " << endl;
	director.crearPersona(1);  // se crea un director de tipo persona, y se le pasa por parametro el entero que hace referencia al director

	cout << " Digite la informacion del codirector: ";  // se le pregunta al usuario si el proyecto cuenta con un codirector o no
	while(salida == 1){
		cout << " ¿Hay codirector?\n 1. SI\n 2. NO " << endl;
		cin >> opcionUsuarioCodirector;

		if(opcionUsuarioCodirector < 1){
			cout << " Error!, esta opcion no es valida" << endl;  // validacion para que el usuario no digite un numero menor a 1
			salida = 1;
		}
		else if(opcionUsuarioCodirector == 1){
			estadoCodirector = true;
			codirector.crearPersona(2);  // se crea un autor de tipo codirector, y se le pasa por parametro el entero que hace referencia al codirector
			salida = 0;
		}
		else if(opcionUsuarioCodirector == 2){
			cout << " No hay codirector" << endl;
			salida = 0;
		}
		else if(opcionUsuarioCodirector > 2){
			cout << " Error!, esta opcion no es valida" << endl; // validacion para que el usuario no digite un numero mayor a 2
			salida = 1;
		}

	cout << " Digite la informacion del Jurado 1" << endl;
	juradoUno.crearPersona(4);  // se crea un autor de tipo jurado, y se le pasa por parametro el entero que hace referencia al jurado

	cout << " Digite la informacion del Jurado 2" << endl;
	juradoDos.crearPersona(4);   // se crea un autor de tipo jurado, y se le pasa por parametro el entero que hace referencia al jurado

	}

	estadoProyecto = "";  //  se inicializa en vacio, ya que por el momento no es posibe saber el estado del proyecto, solo se sabra hasta que se calcule la nota final

	comentarioAprobacion = "";   //  se inicializa en vacio, ya que por el momento no es posibe saber el estado del proyecto, solo se sabra hasta que se calcule la nota final
 
	estadoActa = "Abierto";  // se inicializa en estado "Abierto", ya que es el unico estado que me permite modificar el acta

}

// funcion que se encarga de crear las calificaciones y las almacena en una lista
void Acta::agregarCalificaciones(){
	Calificacion calificacion;

	if(listaCalificaciones.size() == 8){
		cout << " Error!, ya estan todas las calificaciones" << endl;
	}
	
	while( listaCalificaciones.size() < 8 ){
		calificacion.crearCalificacion( listaCalificaciones.size() );
		listaCalificaciones.push_back( calificacion );
	}
}

void Acta::mostrarCalificaciones(){
	list<Calificacion>::iterator it;
	for( it = listaCalificaciones.begin(); it != listaCalificaciones.end(); it++ ){
		it->mostrarCalificacion();
	}
}

void Acta::calcularNotaFinal(){
	list<Calificacion>::iterator it2;
	float notaFinal = 0, porcentajeNota, sumatoriaNotas = 0, multiplicacionNotas = 0;
	for( it2 = listaCalificaciones.begin(); it2 != listaCalificaciones.end(); it2++ ){
		sumatoriaNotas = ( it2->getNotaJuradoUno() + it2->getNotaJuradoDos() );
		multiplicacionNotas += ( sumatoriaNotas * it2->getPorcentajeNotaCriterio() );
	}
	notaFinal = multiplicacionNotas/2;
	cout << " Nota final: " << notaFinal << endl;
}

void Acta::cerrarActa(){
	estadoActa = "Cerrado";
	return;
}

// este metodo se encarga de imprimir el acta
void Acta::mostrarActa(){
	cout << " No. Acta: " << idActa << endl;
	cout << " ===========================================" << endl;
	cout << "Fecha: " << fecha << endl;
	cout << " ===========================================" << endl;
	cout << " Autor: " << endl;
	autor.mostrarPersona();
	cout << " ===========================================" << endl;
	cout << " Nombre trabajo: " << nombreTrabajo << endl;
	cout << " ===========================================" << endl;
	cout << " Tipo trabajo: " << tipoTrabajo << endl;
	cout << " ===========================================" << endl;
	cout << " Periodo: " << periodo << endl;
	cout << " ===========================================" << endl;
	cout << " Informacion Director: " << endl;
	director.mostrarPersona();
	cout << " ===========================================" << endl;
	if( estadoCodirector ){
		cout << " Informacion Codirector: " << endl;
		codirector.mostrarPersona();
	}
	else{
		cout << " No hay codirector en este proyecto." << endl;
	}
	cout << " ===========================================" << endl;
	cout << "  Informacion Jurado Uno: " << endl;
	juradoUno.mostrarPersona();
	cout << " ===========================================" << endl;
	cout << " Informacion Jurado Dos: " << endl;
	juradoDos.mostrarPersona();
	cout << " ===========================================" << endl;
	cout << " Estado Proyecto: " << estadoProyecto << endl;
	cout << " ===========================================" << endl;
	cout << " Comentarios de aprobacion: " << comentarioAprobacion << endl;
	cout << " ===========================================" << endl;
	cout << " Estado acta: " << estadoActa << endl;

}


