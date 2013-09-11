// t8c2e2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Auto.h"
#define N 3

void llega_auto(stack<Auto> *estac, queue<Auto> *en_espera)
{
	string placas;

	/* Simular que llega un auto */
	cout << "Entre placas del vehiculo: ";
	cin >> placas;

	Auto a(placas);

	if (estac->size() < N)
		estac->push(a);
	else {
		cout << " El estacionamiento esta lleno. El auto " << placas << " se puso en espera" << endl;
		en_espera->push(a);
	}

	cout << "Hay " << estac->size() << " autos en el estacionamiento. Quedan " << N - estac->size() << " lugares disponibles" << endl;
	cout << "Hay " << en_espera->size() << " autos en espera" << endl;
}

void retira_auto(stack<Auto> *estac, queue<Auto> *en_espera)
{
	string placas;

	/* Simular que un auto se retira */
	cout << "Entre las placas del auto que se retira: ";
	cin >> placas;

	/* Pila temporal */
	stack<Auto> calle;

	bool salio = false;
	Auto tmp;

	while (!estac->empty() && !salio)
	{
		tmp = estac->top();
		estac->pop();

		if (tmp.getPlacas() != placas)
			calle.push(tmp);
		else {
			salio = true;
			cout << "El auto " << tmp.getPlacas() << " se retiro del estacionamiento" << endl;
		}
	}

	/* Regresar los vehiculos de la calle al estacionamiento */
	while (!calle.empty())
	{
		tmp = calle.top();
		calle.pop();
		estac->push(tmp);
	}

	/* Poner en el estacionamiento el primero en espera */
	if (!en_espera->empty())
	{
		tmp = en_espera->front();
		en_espera->pop();
		estac->push(tmp);
		cout << "El auto " << tmp.getPlacas() << " se paso al estacionamiento" << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	/* Modelar estacionamiento en bateria
	 con cola de espera */

	/* Pila que modela el estacionamiento */
	stack<Auto> estac;

	/* Cola de autos en espera */
	queue<Auto> en_espera;

	int opc = -1;

	do {
		cout << "Entra una opcion: " << endl;
		cout << "	(1) Recibir un auto" << endl;
		cout << "	(2) Retirar un auto" << endl;
		cout << "	(-1) Salir" << endl;
		cout << "?: ";
		cin >> opc;

		switch (opc)
		{
		case 1: llega_auto(&estac, &en_espera);
			break;
		case 2: retira_auto(&estac, &en_espera);
			break;
		default:
			cout << "Opcion no valida" << endl;
		}
	} while (opc != -1);
	
	
	return 0;
}

