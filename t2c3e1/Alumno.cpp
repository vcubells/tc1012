#include "StdAfx.h"
#include "Alumno.h"


Alumno::Alumno(void)
{
	nombre = "";
	for (int i=0; i<MATERIAS; ++i)
		calif[i] = 0;
}

string Alumno::getNombre()
{
	return nombre;
}

void Alumno::setNombre(string n)
{
	nombre = n;
}

int Alumno::getCalif(int m)
{
	return calif[m];
}

void Alumno::setCalif(int m, int c)
{
	calif[m] = c < 60 ? 60 : (c > 100 ? 100 : c);
}

void Alumno::leerDatos()
{
	cout << "Entra el nombre del alumno: ";
	cin >> nombre;

	int c = 0;

	for(int i=0; i < MATERIAS; ++i)
	{
		cout << "Entre la calificación de la materia " << (i+1) << " : ";
		cin >> c;
		setCalif(i, c);
		cout << endl;
	}
}

void Alumno::imprimeDatos()
{
	float promedio = Alumno::calcularPromedio();
	cout << "El promedio de " << nombre << " es: " << promedio << endl;
}

float Alumno::calcularPromedio()
{
	float promedio = 0;
	int suma = 0;

	for(int i=0; i < MATERIAS; ++i)
		suma += calif[i];

	promedio = suma / MATERIAS;

	return promedio;
}

Alumno::~Alumno(void)
{
}
