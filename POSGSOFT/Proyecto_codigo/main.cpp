#include <iostream>
#include "calificacion.h"
#include "registroActas.h"
#include "persona.h"
#include "calificacion.h"
#include "criterio.h"
#include "acta.h"

int main(){ 
	/*Persona persona1;  // se crea un objeto de tipo persona (esto es para motivos de prueba)
	persona1.crearPersona();   // se hace el llamado al metodo de crear persona
	persona1.mostrarPersona();  // se hace el llamado al metodo de imprimir persona*/

	/*Calificacion calificacion;  // se crea un objeto de tipo Calificacion (esto es para motivos de prueba)
	calificacion.crearCalificacion();
	calificacion.mostrarCalificacion();*/
	Acta acta1;
	acta1.crearActa(1);
	acta1.cerrarActa();
	acta1.crearTxtActaCerrada();
    return 0;
}
