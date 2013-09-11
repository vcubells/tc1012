// EP2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Binario.h"
#include "PuntoFlotante.h"


int _tmain(int argc, _TCHAR* argv[])
{
	//Crear un número entero
	Entero entero(45);
	cout << entero << endl;

	Entero e(56);

	cout << (entero < e ? "Es menor" : "No lo es") << endl << endl;

	cout << "Total de enteros: " << Entero::total << endl << endl;

	// Crear un núumero binario
	Binario binario(64);
	cout << binario << endl;

	cout << "Total de binarios: " << Binario::total << endl << endl;

	Binario b(57);

	cout << (binario < b ? "Es menor" : "No lo es") << endl << endl;

	// Crear un número en punto flotante
	PuntoFlotante pf(34, 5);
	cout << pf << endl;

	PuntoFlotante p(34,49);

	cout << (pf < p ? "Es menor" : "No lo es") << endl << endl;

	return 0;
}

