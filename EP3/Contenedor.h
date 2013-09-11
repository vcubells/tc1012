#pragma once
#include "Producto.h"

class Contenedor
{
public:
	Contenedor(void);
	Contenedor(int, string);
	~Contenedor(void);

	float costo() const;
	void addProducto(Producto p);

	friend ostream & operator <<(ostream & os, Contenedor & c);


private:
	int numero;
	string empresa;

	vector<Producto> productos;

};

