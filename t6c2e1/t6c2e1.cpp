// t6c2e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Circulo.h"
#include "Rectangulo.h"
#include "Triangulo.h"

#define N 7

int _tmain(int argc, _TCHAR* argv[])
{
	Figura *grafico[N];
	
	Circulo *c = new Circulo(9);
	cout << *c;

	grafico[0] = new Circulo(4.5);
	grafico[1] = new Circulo(4.5);
	grafico[2] = new Circulo(10);
	grafico[3] = new Rectangulo(10, 5);
	grafico[4] = new Rectangulo(4, 6.7);
	grafico[5] = new Triangulo(10, 5);
	grafico[6] = new Triangulo(4, 6.7);


	for(int i = 0; i < N; ++i )
	{
		cout << " ----- Figura " << (i+1) << " -----" << endl;
		
		cout << (*grafico[i]);

		cout << endl;
	}
	
	// Borrar todos los objetos creados
	for (int i = 0; i < N; ++i)
	{
		delete grafico[i];
	}


	return 0;
}

