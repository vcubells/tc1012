#include "StdAfx.h"
#include "Alumno.h"


Alumno::Alumno(void)
{
}

Alumno::Alumno(string n, string m):Persona(n), matricula(m)
{
}

Alumno::~Alumno(void)
{
}

void Alumno::imprime() const
{
	Persona::imprime();
	cout << "La matricula del alumno es : " << matricula << endl;
}