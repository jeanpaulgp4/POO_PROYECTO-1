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
void Persona::crearPersona(){
	int temp; // variable temporal que se utiliza para conocer la opcion del usuario a la hora de digitar su rol

	cout << " Digite su nombre: " << endl;
	getline(cin, nombres);  // se utiliza el getline ya que me permite leer cadenas con espacios

	cout << " Digite su apellido: " << endl;
	getline(cin, apellidos);

	cout << " Digite su email: " << endl;
	getline(cin, email);

	cout << " Digite su id: " << endl;
	cin >> idPersona;

	cout << " Digite su telefono (7 digitos max): " << endl;
	cin >> telefono;

	cout << " Digite su rol: \n 1. Director\n 2. Codirector\n 3. Jurado Interno\n 4 Jurado Externo\n" << endl;
	cin >> temp;

	// se crea un condicional para conocer cual es la opcion que el usuario escogio
	if(temp == 1){
		rolPersona = "Director";
	}
	else if(temp == 2){
		rolPersona = "Codirector";
	}
	else if(temp == 3){
		rolPersona = " JuradoInterno";
	}
	else if(temp == 4){
		rolPersona = " JuradoExterno";
	}

	else if(temp == 5){
		rolPersona = "Estudiante";
	}
}

// esta funcion se encarga de imprimir los datos de la persona que se creo
void Persona::mostrarPersona(){
	cout << "Nombres: " << this->nombres << endl;
	cout << "Apellidos: " << this->apellidos << endl;
	cout << "Email: " << this->email << endl;
	cout << "Id: " << this->idPersona << endl;
	cout << "Telefono: " << this->telefono << endl;
	cout << "Rol: " << this->rolPersona << endl;
}