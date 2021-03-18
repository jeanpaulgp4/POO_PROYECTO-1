#include <iostream>
#include "calificacion.h"
#include "registroActas.h"
#include "persona.h"
#include "calificacion.h"
#include "criterio.h"

int main(){ 
	/*Persona persona1;  // se crea un objeto de tipo persona (esto es para motivos de prueba)
	persona1.crearPersona();   // se hace el llamado al metodo de crear persona
	persona1.mostrarPersona();  // se hace el llamado al metodo de imprimir persona*/

	Criterio criterio1;
	criterio1.crearCriterio(2);
	criterio1.mostrarCriterio();
    return 0;
}
