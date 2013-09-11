// Asesoria 24-03-2011.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Proveedor.h"
#include "Producto.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Proveedor *bimbo = new Proveedor("Bimbo");
	
	Producto *barritas = new Producto("Barritas Cereal", 4.5, 10, bimbo);

	//Producto barritas("Barritas Cereal", 4.5, 10, bimbo);

	Producto *ventas[2];
	ventas[0] = barritas;
	ventas[0]->venta(5);
	ventas[1] = barritas;
	ventas[1]->venta(2);

	cout << "Stock disponible: " << barritas->getStock() << endl;


	return 0;
}

