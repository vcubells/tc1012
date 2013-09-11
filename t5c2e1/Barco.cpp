#include "StdAfx.h"
#include "Barco.h"


Barco::Barco(void)
{
}

Barco::Barco(string m, int e): Vehiculo(m), eslora(e)
{
}

Barco::~Barco(void)
{
}

void Barco::setEslora(int e)
{
	eslora = e;
}

int Barco::getEslora() const
{
	return eslora;
}

void Barco::imprime() const
{
	Vehiculo::imprime();
	cout << "Eslora: " << eslora << endl;
}