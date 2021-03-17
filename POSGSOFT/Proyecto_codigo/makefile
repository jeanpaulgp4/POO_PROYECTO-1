all: compilar
compilar: menu main
		g++ menu.o main.o
menu: menu.cpp menu.h
		g++ -c menu.cpp
main: main.cpp menu.h
	  g++ -c main.cpp