#include "StdAfx.h"
#include "alumno.h"


alumno::alumno(void)
{
	cout << "Estoy en el constructor de Alumno" << endl;
}


alumno::~alumno(void)
{
	cout << "Estoy en el destructor de Alumno" << endl;
}

alumno::alumno(string n, string m):persona(n), matricula(m)
{
	cout << "Estoy en el constructor con parámetros de Alumno" << endl;
}

void alumno::setMatricula(string m)
{
	matricula = m;
}

string alumno::getMatricula() const
{
	return matricula;
}

void alumno::imprime() const
{
	persona::imprime();
	cout << "Matricula: " << matricula << endl; 
}