// apuntadores.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Clase {
private:
	int count;
public:
	Clase(void);
	Clase(int c):count(c) { };

	void Incrementa();
	int getCount() const;
	void Adiciona(Clase *o);

	~Clase(void);
};

Clase::Clase(void)
{
	count = 0;
}

void Clase::Incrementa()
{
	++count;
}

int Clase::getCount() const
{
	return count;
}

void Clase::Adiciona(Clase *o)
{
	o->Incrementa();
	count += o->getCount();

}

Clase::~Clase(void)
{
}

void modifica(int *a)
{
	++(*a);
}

int _tmain(int argc, _TCHAR* argv[])
{
	// Apuntadores a tipos primitivos

	int numero = 3;
	cout << "numero = " << numero << endl;

	modifica(&numero);
	cout << "numero = " << numero << endl;

	Clase c;	    // Count == 0;
	c.Incrementa(); // count == 1;
	cout << "count = " << c.getCount() << endl;
	
	Clase *c2 = new Clase(2);	// count c2 == 2;
	c.Adiciona(c2); // count == 3;
	cout << "count = " << c.getCount() << endl;   // count == 4

	// Repetir la operación
	c.Adiciona(&c2); // count == 2;
	cout << "count = " << c.getCount() << endl;

	return 0;
}

