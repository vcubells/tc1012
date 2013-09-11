#include "StdAfx.h"
#include "Binario.h"

int Binario::total = 0;

Binario::Binario(void)
{
	for(int i = 0; i < 8; ++i)
	{
		bin[i] = 0;
	}
}

Binario::~Binario(void)
{
}


Binario::Binario(int n):Entero(n)
{
	convierte();
	++total;
}


void Binario::init()
{
	for(int i = 0; i < 8; ++i)
	{
		bin[i] = 0;
	}
}

void Binario::convierte()
{
	int resto = -1;
	int div = getEntero();
	int i = 0;

	init();

	while (div != 0)
	{
		resto = div % 2;
		div /= 2;

		bin[7-i] = resto;
		++i;		
	}
}

bool operator<(Binario & n, Binario & n2)
{
	return n.getEntero() < n2.getEntero();
}

ostream & operator<<(ostream & os, Binario  & numero)
{
	for (int i= 0; i < 8; ++i)
		os << numero.bin[i];

	return os;
}