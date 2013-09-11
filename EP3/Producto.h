#pragma once
class Producto
{
public:
	Producto(void);
	Producto(string, int, float);
	virtual ~Producto(void);

	float costo();
	friend ostream & operator <<(ostream & os, Producto & p);

private:
	string descripcion;
	int cantidad;
	float precio;
};

