// sobrecarga_operadores.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Direccion.h";

int _tmain(int argc, _TCHAR* argv[])
{
	Direccion dir1("Ave. Carlos Lazo", 100, 0, "Santa Fe", 94000);

	cout << dir1; //<<(cout, dir)

	Direccion dir2("Ave. Carlos Lazo", 100, 45, "Santa Fe", 94000);
	
	//Comparación
	if (dir1 == dir2)
		cout << "Es la misma dirección " << endl;
	else 
		cout << "Son lugares diferentes" << endl;

	// Sumar
	Direccion d;
	d = dir1 + dir2;
	cout << "El resultado de la suma es: " << d.getExterior();

	return 0;
}

