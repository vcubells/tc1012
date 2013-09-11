#pragma once
#include "Proveedor.h"

class Producto
{
public:
	Producto(void);
	Producto(string, float, int, Proveedor *);
	~Producto(void);

	void venta(int cant);
	int getStock() const
	{
		return stock;
	}

private:
	string descripcion;
	float precio;
	int stock;
	Proveedor *proveedor;
};

