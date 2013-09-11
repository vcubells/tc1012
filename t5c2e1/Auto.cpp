#include "StdAfx.h"
#include "Auto.h"


Auto::Auto(void)
{
}

Auto::Auto(string m, int ll): Vehiculo(m), llantas(ll)
{
}

Auto::~Auto(void)
{
}

void Auto::setLlantas(int t)
{
	llantas = t;
}

int Auto::getLlantas() const
{
	return llantas;
}

void Auto::imprime() const
{
	Vehiculo::imprime();
	cout << "No de llantas: " << llantas << endl;
}
