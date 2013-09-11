#pragma once
#include "entero.h"
class PuntoFlotante :
	public Entero
{
public:
	PuntoFlotante(void);
	PuntoFlotante(int entero, int fraccion);
	~PuntoFlotante(void);

	static int total;

	friend ostream & operator<<(ostream & os, PuntoFlotante  & numero);
	friend bool operator<(PuntoFlotante& n, PuntoFlotante &n2);

private:
	int fraccion;
};

