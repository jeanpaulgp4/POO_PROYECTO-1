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
			case 0:
				salida = 0;
				break;

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
			case 5:
				int salida2 = 1;
				int varOpcion2;
				int varSalida2 = 1;
				int varOpcion;
				int varSalida = 1;
				do{
					int opcionUsuario2 = menu2();
					switch(opcionUsuario2){

						case 0:
							salida2 = 0;
							salida = 1;
							break;

						case 1:
							registro.cantTrabajosAplicado();
							salida2 = 1;
							break;

						case 2:
							registro.cantTrabajosInvestigacion();
							salida2 = 1;
							break;

						case 3: 
							registro.cantTrabajosDirigidos();
							salida2 = 1;
							break;

						case 4:
							registro.cantTrabajosJurado();
							salida2 = 1;
							break;

						case 5:
							registro.participacionJuradoActas();
							salida2 = 1;
							break;

						case 6: 
							cout << " Digite: \n 1. Mostrar actas pendientes\n 2. Mostrar actas reprobadas " << endl;
							cin >> varOpcion;

							while( varSalida == 1 ){
								if( varOpcion < 1 ){
									cout << " Opcion no valida " << endl;
									varSalida = 1;
								}
								else if( varOpcion == 1 ){
									registro.actasPendientes();
									varSalida = 0;
								}
								else if( varOpcion == 2 ){
									registro.actasReprobadas();
									varSalida = 0;
								}
								else if( varOpcion > 2 ){
									cout << " Opcion no valida " << endl;
									varSalida = 1;
								}
							}
							salida2 = 1;
							break;

						case 7: 
							cout << " Digite: \n 1. Mostrar jurados internos\n 2. Mostrar jurados externos " << endl;
							cin >> varOpcion2;

							while( varSalida2 == 1 ){
								if( varOpcion2 < 1 ){
									cout << " Opcion no valida " << endl;
									varSalida2 = 1;
								}
								else if( varOpcion2 == 1 ){
									registro.juradosInternos();
									varSalida2 = 0;
								}
								else if( varOpcion2 == 2 ){
									registro.juradosExternos();
									varSalida2 = 0;
								}
								else if( varOpcion2 > 2 ){
									cout << " Opcion no valida " << endl;
									varSalida2 = 1;
								}
							}
							salida2 = 1;
							break;

						case 8:
							registro.mostrarCriteriosActa();
							salida2 = 1;
							break;
					}

				}while( salida2 == 1 );
		}
	}while(salida == 1);
    return 0;
}
