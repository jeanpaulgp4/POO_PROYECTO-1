#include <iostream>
#include "menu.cpp"
#include "calificacion.h"
#include "registroActas.h"
#include "persona.h"
#include "calificacion.h"
#include "criterio.h"
#include "acta.h"


// funcion que se encarga de manejar las opciones del programa
int main(){ 
	RegistroActas registro;
	int salida = 1;
	do{
		int opcionUsuario = menu();
		switch(opcionUsuario){
			case 1:
				registro.guardarActas();
				salida = 1;
				break;

			case 2: 
				registro.modificarActa();
				salida = 1;
				break;

			case 3:
				registro.cerrarActaTotal();
				salida = 1;
				break;
				
			case 4:
				registro.eliminarActa();
				salida = 1;
				break;
		}
	}while(salida == 1);
    return 0;
}
