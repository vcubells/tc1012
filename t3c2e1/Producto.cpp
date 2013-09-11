#include "StdAfx.h"
#include "Producto.h"

int Producto::count = 0;

Producto::Producto(void)
{
	this->descripcion = "No definido";
	this->precio = 0.0;
	this->stock = 0;
}

Producto::~Producto(void)
{

}

Producto::Producto(string d, float p, int s): descripcion(d), precio(p), stock(s)
{
 ++count;
}

Producto & Producto::setDescripcion(string s)
{
	this->descripcion = s;
	return *this;
}

string Producto::getDescripcion() const
{
	return this->descripcion;
}

Producto & Producto::setPrecio(float p)
{
	this->precio = p;
	return *this;
}

float Producto::getPrecio() const
{
	return this->precio;
}

Producto & Producto::setStock(int s)
{
	this->stock = s;
	return *this;
}

int Producto::getStock() const
{
	return this->stock;
}


void Producto::show() const
{
	cout << this->descripcion << " : ";
	cout << this->precio << " : ";
	cout << this->stock << endl << endl;
}
