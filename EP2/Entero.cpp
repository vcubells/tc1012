#include "StdAfx.h"
#include "Entero.h"

int Entero::total = 0;

Entero::Entero(void)
{
}


Entero::~Entero(void)
{
}


Entero::Entero(int n):numero(n)
{
	++total;
}

int Entero::getEntero() const
{
	return numero;
}

bool operator<(Entero& n, Entero &n2)
{
	return n.getEntero() < n2.getEntero();
}

ostream & operator<<(ostream & os, Entero  & numero)
{
	return os << numero.numero;
}