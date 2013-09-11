#include "StdAfx.h"
#include "Moto.h"


Moto::Moto(void)
{
}

Moto::Moto(string m, int ll, int c) : Auto(m,ll), cilindraje(c)
{
}

Moto::~Moto(void)
{
}

void Moto::setCilindraje(int t)
{
	cilindraje = t;
}

int Moto::getCilindraje() const
{
	return cilindraje;
}

void Moto::imprime() const
{
	Auto::imprime();
	cout << "Cilindraje: " << cilindraje << "cc" << endl;
}

