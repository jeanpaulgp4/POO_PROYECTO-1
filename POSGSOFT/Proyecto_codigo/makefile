all: compilar
compilar: persona main
		g++ persona.o main.o 
persona: persona.h persona.cpp
		g++ -c persona.cpp
main: main.cpp persona.h  
	  g++ -c main.cpp