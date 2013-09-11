// t4c1e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Libro.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Libro *libro = new Libro(800, 475);
	Libro *libro2 = new Libro(100000, 56);
	Libro *libro3 = new Libro(5673, 1000);

	cout << (*libro2 == *libro3 ? "Son iguales" : (*libro2 < *libro3 ? "libro izq es menor" : "libro der es menor")) << endl;

	delete libro;
	delete libro2;

	return 0;
}

