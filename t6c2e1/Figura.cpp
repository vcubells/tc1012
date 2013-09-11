#include "StdAfx.h"
#include "Figura.h"


Figura::Figura(void)
{
	tipo = "";
}

Figura::~Figura(void)
{
}

string Figura::getTipo() const
{
	return tipo;
}

ostream & operator <<(ostream &os, Figura &c)
{
	return os << c.tipo;
}