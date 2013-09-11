// c9e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Platillo.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Producto *frijoles = new Producto("Frijoles", 3.0, 2);
	Producto *tortilla = new Producto("Tortilla", 0.10, 40);
	Producto *carne = new Producto ("Carne", 5.5, 100);
	Producto *salsa = new Producto("Salsa", 1.0, 50);
	Producto *cebolla = new Producto("Cebolla", 0.5, 200);

	Platillo taco;
	taco.agregarComponente(frijoles, 1);
	taco.agregarComponente(tortilla, 2);
	taco.agregarComponente(carne, 1);

	taco.show();

	Platillo sope;
	sope.agregarComponente(frijoles, 2).agregarComponente(salsa, 1).agregarComponente(cebolla, 2);
	
	sope.show();

	cout << "Cantidad de productos creados: " << Producto::count << endl;


	// Liberar memoria
	delete frijoles;
	delete tortilla;
	delete carne;
	delete salsa;
	delete cebolla;

	system("pause");

	return 0;
}

