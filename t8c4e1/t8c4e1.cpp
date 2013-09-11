// t8c4e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	//Crear una matriz bidimensional
	vector< vector<int> > matriz;
	
	//Creando fila 1
	vector<int> fila1;
	fila1.push_back(1);
	fila1.push_back(2);
	fila1.push_back(3);

	//Creando fila 2
	vector<int> fila2;
	fila2.push_back(4);
	fila2.push_back(5);
	fila2.push_back(6);
	fila2.push_back(7);
	fila2.push_back(8);
	
	matriz.push_back(fila1);
	matriz.push_back(fila2);

	for(int i = 0; i < matriz.size(); ++i)
	{
		for(int j = 0; j < matriz[i].size(); ++j)
		{
			cout << matriz[i][j] << " ";
		}

		cout << endl;
	}


	// Creando pila de colas
	stack< queue<string> > pila;
	string cad;
	
	queue<string> cola;	
	
	int cont = 1;
	do {
		cout << "Entre una cadena: ";
		cin >> cad;
		cola.push(cad);

		if (cont % 3 == 0)
		{	
			pila.push(cola);
			//Vaciar la cola temporal
			while (!cola.empty())
			{
				cola.pop();
			}
		}

		if (cad == "salir")
			pila.push(cola);

		++cont;

	}while (cad != "salir");

	while (!pila.empty())
	{
		queue<string> cola = pila.top();
		pila.pop();

		while(!cola.empty())
		{
			cout << cola.front() << " ";
			cola.pop();
		}

		cout << endl;
	}
	return 0;
}

