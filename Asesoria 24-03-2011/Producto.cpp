#include "StdAfx.h"
#include "Producto.h"


Producto::Producto(void)
{
}

Producto::Producto(string d, float pr, int s, Proveedor *p):
	descripcion(d), precio(pr), stock(s), proveedor(p)
{
}

void Producto::venta(int cant)
{
	stock -= cant;
}

Producto::~Producto(void)
{
}
