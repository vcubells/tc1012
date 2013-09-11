// EP3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Contenedor.h"

#define M 2
#define N 3

void ingresa_contenedor(vector<stack<Contenedor>> &almacen, Contenedor c)
{
	int libre = 0;
	int i=0;
	while ( (i < M) && (almacen[i].size() == N))
		++i;
	if (i < M)
		almacen[i].push(c);
	else
		cout << "No se puede ingresar el contenedor porque el almacén está lleno" << endl;
}

void genera_reporte(vector<stack<Contenedor>> & almacen)
{
	float costo_pila = 0;
	float costo_almacen = 0;
	float costo_cont = 0;

	int len = almacen.size();
	for (int i=0; i < len; ++i)
	{
		costo_pila = 0;
		stack<Contenedor> alm = almacen[i];
		while (!alm.empty())
		{
			cout << alm.top();
			costo_cont = alm.top().costo();
			costo_pila += costo_cont;
			cout << endl << "El costo del contenedor es: " << costo_cont << endl << endl;
			alm.pop();
		}

		cout << "El costo de la pila es: " << costo_pila << endl << endl;
		costo_almacen += costo_pila;
	}

	cout << "El costo total del almacen es: " << costo_almacen << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	stack<Contenedor> pila;

	vector<stack<Contenedor>> almacen (M, pila);

	Producto zapatos("Zapatos", 10, 50);
	Producto blusa("Blusa", 5, 150);
	Producto cinturon("Cinturon", 100, 6.7);
	Producto chamarra("Chamarra", 35, 350);
	Producto pantalon("Pantalon", 10, 200);

	Contenedor c1(1,"Bimbo");
	c1.addProducto(zapatos);
	c1.addProducto(blusa);

	Contenedor c2(2,"Walmart");
	c2.addProducto(cinturon);
	c2.addProducto(blusa);
	c2.addProducto(pantalon);

	Contenedor c3(3,"Sabritas");
	c3.addProducto(cinturon);
	c3.addProducto(chamarra);
	c3.addProducto(pantalon);

	Contenedor c4(4,"Carso");
	c4.addProducto(cinturon);
	c4.addProducto(blusa);

	Contenedor c5(5,"Bimbo");
	c5.addProducto(zapatos);
	c5.addProducto(chamarra);
	c5.addProducto(pantalon);
	
	ingresa_contenedor(almacen, c1);
	ingresa_contenedor(almacen, c2);
	ingresa_contenedor(almacen, c3);
	ingresa_contenedor(almacen, c4);
	ingresa_contenedor(almacen, c5);

	genera_reporte(almacen);

	return 0;
}

