// t5c2e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Avion.h"
#include "Barco.h"
#include "Moto.h"
#include "Camion.h"


int _tmain(int argc, _TCHAR* argv[])
{
	// Crear un Avion
	Avion delta("RC-456", 4);
	delta.imprime();

	// Crear un barco
	Barco buque("700-ARC", 500);
	buque.imprime();

	// Crear una moto
	Moto ninja("HR-550", 2, 550);
	ninja.imprime();

	// Crear un camión
    Camion trailer("INT-700", 16, 4);
	trailer.imprime();



}

