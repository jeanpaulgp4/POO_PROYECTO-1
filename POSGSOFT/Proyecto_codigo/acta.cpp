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
	int cantidadDirector = 0, cantidadCodirector = 0, cantidadJuradoUno = 0, cantidadJuradoDos = 0;
	int temp;
	cout << " Digite la fecha: " << endl;
	fflush(stdin);  
	getline(cin, fecha);
	fflush(stdin);

	Persona autor;
	autor.crearPersona();  // hace el llamado al metodo de crear persona de la clase Persona

	fflush(stdin);
	cout << " Digite el nombre del trabajo: " << endl;
	getline(cin, nombreTrabajo);
	fflush(stdin);

	// se hace una validacion con condicionales, esto se hace para evitar que el usuario pueda digitar algo distinto a Investigacion o Aplicado
	cout << " Digite alguna de estas opciones sobre tipo de trabajo:\n 1. Investigacion\n 2. Aplicado\n" << endl;  
	cin >> temp;
	fflush(stdin);

	if(temp == 1){
		tipoTrabajo = "Investigacion";
	} 
	else if(temp == 2){
		tipoTrabajo = "Aplicado";
	}
	fflush(stdin);
	cout << " Digite el periodo: " << endl;
	getline(cin, periodo);
	fflush(stdin);

	if(cantidadDirector==0){
		Persona director;
		director.crearPersona();   // hace el llamado al metodo de crear una persona de la clase Persona
		cantidadDirector++;
	}else if(cantidadDirector>=1){
		cout << " ya hay un Director " << endl;
	}
	
	if(cantidadCodirector==0){
		Persona codirector;
		codirector.crearPersona();    // hace el llamado al metodo de crear una persona de la clase Persona
		cantidadCodirector++;
	}

	if(cantidadJuradoUno==0){
		Persona juradoUno;
		juradoUno.crearPersona();    // hace el llamado al metodo de crear una persona de la clase Persona
		cantidadJuradoUno++;
	}
	
	if(cantidadJuradoDos==0){
		Persona juradoDos;
		juradoDos.crearPersona();   // hace el llamado al metodo de crear una persona de la clase Persona
		cantidadJuradoDos++;
	}

	estadoProyecto = "";  //  se inicializa en vacio, ya que por el momento no es posibe saber el estado del proyecto, solo se sabra hasta que se calcule la nota final

	comentarioAprobacion = "";   //  se inicializa en vacio, ya que por el momento no es posibe saber el estado del proyecto, solo se sabra hasta que se calcule la nota final
 
	estadoActa = "Abierto";  // se inicializa en estado "Abierto", ya que es el unico estado que me permite modificar el acta


}

void Acta::cerrarActa(){
	estadoActa = "Cerrado";
	return;
}

// este metodo se encarga de imprimir el acta
void Acta::imprimirActa(){
	cout << " El estado del acta es: " << estadoActa << endl;
}


