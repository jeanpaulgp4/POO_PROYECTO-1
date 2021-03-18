#include "criterio.h"

// implementacion del constructor por defecto de la clase Criterio
Criterio::Criterio(){
}

// implementacion del constructor con los atributos de la clase Criterio
Criterio::Criterio(int idCriterio, float porcentajeNota, string descripcionCriterio){
	this->idCriterio = idCriterio;
	this->porcentajeNota = porcentajeNota;
	this->descripcionCriterio = descripcionCriterio;
}
