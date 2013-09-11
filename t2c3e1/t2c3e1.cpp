// c5e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Alumno.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Alumno a;
	a.leerDatos();
	a.imprimeDatos();

	cout << "Promedio despues de cambiar calificaciones" << endl;

	a.setCalif(4, 90);
	a.setNombre("Juana Bacallao");
	a.imprimeDatos();

	for(int i=0; i < MATERIAS; ++i)
	{
		cout << " Calificacion de la materia" << (i+1);
		cout << " es: " << a.getCalif(i) << endl;
	}


	system("pause");

	return 0;
}

