// t8c1e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	list<int> numeros;

	int opc = -1;

	do {
		cout << "Entre un numero ( -1 para terminar) : ";
		cin >> opc;
		if (opc != -1)
			numeros.push_front(opc);
	} while (opc != -1);
	
	cout << "Usted entro " << numeros.size() << " numeros y son:" << endl;
	
	list<int>::const_iterator
		lit (numeros.begin()),
		lend(numeros.end());
	
	int suma = 0;
    for(;lit!=lend;++lit) 
	{
		cout << *lit << endl;
		suma += *lit;
	}
	cout << "La suma de todos los numeros es: " << suma << endl;

	// Eliminando el primer elemento
	cout << "Se borra el primer elemento" << endl;
	numeros.pop_front();
	
	list<int>::const_iterator
		lit2 (numeros.begin()),
		lend2(numeros.end());
	for(;lit2!=lend2;++lit2) 
	{
		cout << *lit2 << endl;
	}

	
	
	return 0;
}

