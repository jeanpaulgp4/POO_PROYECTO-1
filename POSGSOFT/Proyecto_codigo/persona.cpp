#include "persona.h"

//implementacion del constructor por defecto
Persona::Persona(){
}

// implementacion del constructor de la clase con los atributos
Persona::Persona(string nombres, string apellidos, string email, int idPersona, int telefono, string rolPersona){
	this->nombres= nombres;
	this->apellidos = apellidos;
	this->email = email;
	this->idPersona = idPersona;
	this->telefono = telefono;
	this->rolPersona = rolPersona;
}

// funcion que pide los datos al usuario
void Persona::crearPersona(int opcionUsuario){  // se hizo un cambio a la hora de validar que no fuesen a existir mas de un director etc, por tal razon, se le envia por parametro un entero que va a corresponder a cada uno de los tipos de persona
	int opcionUsuarioJurado;   // esta variable se utiliza para saber que opcion escogio el usuario
	int salida = 1;  // esta variable se utiliza para saber cuando deber permanecer en el ciclo o cuando debe salir
	int temp; // variable temporal que se utiliza para conocer la opcion del usuario a la hora de digitar su rol
	fflush(stdin);
	cout << " Digite su nombre: " << endl;
	getline(cin, nombres);  // se utiliza el getline ya que me permite leer cadenas con espacios
	fflush(stdin);

	fflush(stdin);
	cout << " Digite su apellido: " << endl;
	getline(cin, apellidos);
	fflush(stdin);

	fflush(stdin);
	cout << " Digite su email: " << endl;
	getline(cin, email);
	fflush(stdin);

	fflush(stdin);
	cout << " Digite su id: " << endl;
	cin >> idPersona;
	fflush(stdin);
	
	fflush(stdin);
	cout << " Digite su telefono (7 digitos max): " << endl;
	cin >> telefono;
	fflush(stdin);
 	
 	// en estos condicionales, dependiendo del entero que reciba por parametro, se le aplicara un rol de persona
	if(opcionUsuario == 1){
		rolPersona = "Director";
	}
	else if(opcionUsuario == 2){
		rolPersona = "Codirector";
	}
	else if(opcionUsuario == 3){
		rolPersona = "Estudiante";
	}
	else if(opcionUsuario == 4){
		while(salida == 1){
			cout << " Digite: \n 1. Si es jurado interno\n 2. Si es jurado externo\n" << endl;  // Cuando el usuario tenga que digitar los datos del jurado, tambien se le pregunta si el hace parte o no de la universidad
			cin >> opcionUsuarioJurado;
			if(opcionUsuarioJurado < 1){
				cout << " Error!, esta no es una opcion valida" << endl;  // validacion para que el usuario no pueda escoger un numero menor a 1, ya que esta no es una opcion posible
				salida == 1;
			}
			else if(opcionUsuarioJurado == 1){
				rolPersona = "Jurado Interno";
				salida = 0;
			}
			else if(opcionUsuarioJurado == 2){
				rolPersona = "Jurado Externo";
				salida = 0;
			}
			else if(opcionUsuarioJurado > 2){
				cout << " Error!, esta no es una opcion valida" << endl;  // validacion para que el usuario no pueda escoger un numero mayor a 2, ya que esta no es una opcion posible
			}
		}
	}
}

// esta funcion se encarga de imprimir los datos de la persona que se creo
void Persona::mostrarPersona(){
	cout << "Nombres: " << this->nombres << endl;
	cout << "Apellidos: " << this->apellidos << endl;
	cout << "Rol: " << this->rolPersona << endl;
}



void Persona::setNombres( string nombres ){
    this->nombres = nombres;
    return;
}

string Persona::getNombres(){
    return nombres;
}

void Persona::setApellidos( string apellidos ){
    this->apellidos = apellidos;
    return;
}

string Persona::getApellidos(){
    return apellidos;
}

void Persona::setRolPersona( string rolPersona ){
    this->rolPersona = rolPersona;
    return;
}

string Persona::getRolPersona(){
    return rolPersona;
}