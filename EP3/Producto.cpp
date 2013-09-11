#include "StdAfx.h"
#include "Producto.h"


Producto::Producto(void)
{
}

Producto::Producto(string d, int c, float p):descripcion(d), cantidad(c), precio(p)
{
}

Producto::~Producto(void)
{
}

float Producto::costo()
{
	return cantidad * precio;
}

ostream & operator <<(ostream & os, Producto & p)
{
	return os << "	" << p.descripcion << "	" << p.cantidad << "	" << p.precio << endl;
}
