// t5c1e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "alumno.h"


int _tmain(int argc, _TCHAR* argv[])
{
	// Caso base
	persona p;
	p.setNombre("Albertina");
	p.imprime();

	// Incialización con el constructor
	persona p2("Juanita");
	p2.imprime();

	//Crear subclase
	alumno a("Infame", "A01010101");
	a.imprime();
	
	// Encapsular una subclase en una clase superior
	p = a;
	p.imprime();

	return 0;
}

