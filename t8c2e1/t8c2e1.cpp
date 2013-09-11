// t8c2e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void print_vector(vector<int> v)
{
	int len = v.size();
	for(int i=0; i < len; ++i)
		cout << v[i] << ", ";
	cout << endl;
}


int _tmain(int argc, _TCHAR* argv[])
{
	/* Entrar un conjunto de números y almacenarlos
	   en un vector */
	vector<int> numeros;

	int num = -1;

	do {
		cout << "Entre un número: ";
		cin >> num;
		
		if (num != -1)
			numeros.push_back(num);

	} while (num != -1);
	
	/* Imprimir números */
	print_vector(numeros);

	/* Invertir el vector con una pila */
	stack<int> pila;

	int len = numeros.size();
	for(int i=0; i < len; ++i)
		pila.push(numeros[i]);

	numeros.clear();

	while (! pila.empty() )
	{
		numeros.push_back(pila.top());
		pila.pop();
	}

	/* Imprimir vector invertido */
	print_vector(numeros);
	
	return 0;
}

