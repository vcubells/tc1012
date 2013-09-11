#include "StdAfx.h"
#include "persona.h"


persona::persona(void)
{
	cout << "Estoy en el constructor de Persona" << endl;
}

persona::~persona(void)
{
	cout << "Estoy en el destrutor de Persona" << endl;
}

persona::persona(string n): nombre(n)
{
	cout << "Estoy en el constructor con parámetros de Persona" << endl;
}

void persona::setNombre(string n)
{
	nombre = n;
}

string persona::getNombre() const
{
	return nombre;
}

void persona::imprime() const
{
	cout << "Nombre: " << nombre << endl;
}
