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

int menu()
{
    int opcion;
    cout << "Menu del sistema de actas de pos-grado\n"
              << std::endl;
    cout << "1. Crear un acta" << endl;
    cout << "2. Modificar un acta" << endl;
    cout << "3. Cerrar acta" << endl;
    cout << "4. Eliminar acta" << endl;
    cin >> opcion;
    return opcion;
} 

#endif