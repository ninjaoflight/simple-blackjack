#pragma once
#include "mazo.h"
#include <vector>


// debido a que se desconoce la cantidad inicial de jugadores se desconoce cuantas cartas se pueden tomar antes del 21
// por lo que para una mejor gestion estas cartas de la mano se llevan en una lista 
// si getCarta retornara un puntero y no una refencia no podemos crear instancias que se eliminen solas,aumentando la complejidad del programa


class mano {


private:

	std::vector<carta> cartas; 

public:



	void agregarCarta(mazo& ref);
	void agregarCarta(carta& ref);			//indispensable para cargar cartas
	void limpiar();
	size_t getCartas();
	carta &getCarta(int posicion);			// es importante que sea una referencia,asi podemos girar la carta
	int getPuntos();


};


