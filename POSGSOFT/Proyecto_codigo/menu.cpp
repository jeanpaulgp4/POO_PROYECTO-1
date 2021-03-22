#ifndef MENU_H
#define MENU_H

#include "menu.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int menu(){
    int opcion;
    cout << "Menu del sistema de actas de pos-grado\n" << endl;
    cout << "0. Salir" << endl;
    cout << "1. Crear un acta" << endl;
    cout << "2. Modificar un acta" << endl;
    cout << "3. Cerrar acta y mostrar txt " << endl;
    cout << "4. Eliminar acta" << endl;
    cout << "5. Desplegar menu de otras funcionalidades" << endl;
    cin >> opcion;
    return opcion;
} 

int menu2(){
	int opcion2;
	cout << "Menu de otras funcionalidades de actas de pos-grado " << endl;
	cout << "0. Volver al menu anterior " << endl;
	cout << "1. Saber cuantas actas de tipo aplicado se han creado " << endl;
	cout << "2. Saber cuantas actas de tipo investigacion se han creado " << endl;
	cout << "3. Consultar cuantos trabajo ha dirigido un profesor " << endl;
	cout << "4. Consultar en cuales actas ha trabajado de jurado un profesor dado " << endl;
	cout << "5. Ver la lista de jurados que han trabajo en las actas guardadas " << endl;
	cout << "6. Consultar la lista de todas las actas que estan en pendiente o rechazadas " << endl;
	cout << "7. Consultar cuales jurados son internos y cuales son externos " << endl;
	cout << "8. Consultar la lista de criterios de un acta dada " << endl;
	cin >> opcion2;
	return opcion2;
}

#endif