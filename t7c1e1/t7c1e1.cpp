// t7c1e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Plantilla.h"
#include "Persona.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int enteros[N] = {10, 20, 30, 40, 50};
	float flotantes[N] = {1.55, 2.35, 8.9, 10.34, 3.45};

	Plantilla<int> lista(enteros);
	cout << "La suma de enteros es: " << lista.suma() << endl;

	Plantilla<float> listaf(flotantes);
	cout << "La suma de flotantes es: " << listaf.suma() << endl;

	Persona p1(5);
	Persona p2(6);

	p1 += p2;

	cout << "El resultado de p1 + p2 = " << p1.getEdad() << endl;

	Persona listap[N] = { Persona(1), Persona(2), Persona(3), Persona(4), Persona(5) };
	Plantilla<Persona> listaps(listap);
	cout << "La suma de personas es: " << listaps.suma().getEdad() << endl;

	
	return 0;
}

