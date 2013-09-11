#pragma once
class Producto
{
private:
	string descripcion;
	float precio;
	int stock;

public:
	static int count;

	Producto(void);
	Producto(string d, float p, int s);
	~Producto(void);

	Producto & setDescripcion(string s);
	string getDescripcion() const;
	
	Producto & setPrecio(float p);
	float getPrecio() const;

	Producto & setStock(int s);
	int getStock() const;

	void show() const;
};

