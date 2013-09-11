// sobrecarga_herencia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Hija.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Superclase *clase[1];

	Hija *hija = new Hija("Juanita","la del Barrio");
	clase[0] = hija;

	cout << *(clase[0]);

	clase[0]->print();

	return 0;
}

