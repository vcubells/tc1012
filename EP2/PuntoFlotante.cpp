#include "StdAfx.h"
#include "PuntoFlotante.h"

int PuntoFlotante::total = 0;

PuntoFlotante::PuntoFlotante(void)
{
}


PuntoFlotante::~PuntoFlotante(void)
{
}

PuntoFlotante::PuntoFlotante(int entero, int fraccion):Entero(entero), fraccion(fraccion)
{
	++total;
}

bool operator<(PuntoFlotante & n, PuntoFlotante & n2)
{
	return ( (n.getEntero() < n2.getEntero()) && (n.fraccion < n2.fraccion) );
}

ostream & operator<<(ostream & os, PuntoFlotante  & numero)
{
	return os << numero.getEntero() << "." << numero.fraccion;
}