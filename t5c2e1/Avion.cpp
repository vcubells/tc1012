#include "StdAfx.h"
#include "Avion.h"


Avion::Avion(void)
{
}

Avion::Avion(string m, int t):Vehiculo(m), turbinas(t)
{
}

Avion::~Avion(void)
{
}

void Avion::setTurbinas(int t)
{
	turbinas = t;
}

int Avion::getTurbinas() const
{
	return turbinas;
}

void Avion::imprime() const
{
	Vehiculo::imprime();
	cout << "No de turbinas: " << turbinas << endl;
}
