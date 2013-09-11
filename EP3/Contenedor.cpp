#include "StdAfx.h"
#include "Contenedor.h"


Contenedor::Contenedor(void)
{
}

Contenedor::Contenedor(int n, string e): numero(n), empresa(e)
{
}

Contenedor::~Contenedor(void)
{
}

float Contenedor::costo() const
{
	float suma = 0;
	int len = productos.size();

	for(int i=0; i < len; ++i)
	{
		suma += ((Producto)productos[i]).costo();
	}

	return suma;
}

void Contenedor::addProducto(Producto p)
{
	productos.push_back(p);
}

ostream & operator <<(ostream & os, Contenedor & c)
{
	os << "Contenedor No. " << c.numero << endl;
	
	int len = c.productos.size();

	for(int i=0; i < len; ++i)
	{
		os << c.productos[i];
	}

	return os;
}
