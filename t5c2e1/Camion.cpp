#include "StdAfx.h"
#include "Camion.h"


Camion::Camion(void)
{
}

Camion::Camion(string m, int ll, int e): Auto(m, ll), ejes(e)
{
}

Camion::~Camion(void)
{
}

void Camion::setEjes(int t)
{
	ejes = t;
}

int Camion::getEjes() const
{
	return ejes;
}

void Camion::imprime() const
{
	Auto::imprime();
	cout << "No Ejes: " << ejes << endl;
}