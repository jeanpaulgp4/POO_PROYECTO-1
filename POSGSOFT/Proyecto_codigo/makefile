all: compilar
compilar: criterio calificacion persona acta registroActas main
		g++ -o Salida calificacion.o criterio.o persona.o registroActas.o acta.o main.o 
criterio: criterio.h criterio.cpp
		g++ -c criterio.cpp
calificacion: calificacion.h calificacion.cpp
		g++ -c calificacion.cpp
persona: persona.h persona.cpp
		g++ -c persona.cpp
acta: acta.h acta.cpp
		g++ -c acta.cpp
registroActas: registroActas.h registroActas.cpp
		g++ -c registroActas.cpp
main: main.cpp calificacion.h criterio.h persona.h acta.h registroActas.h  
	  g++ -c main.cpp