#include "StdAfx.h"
#include "Profesor.h"


Profesor::Profesor(void)
{
}

Profesor::Profesor(string n, string tipo):Persona(n), tipo(tipo)
{
}

Profesor::~Profesor(void)
{
}

void Profesor::imprime() const
{
	cout << " El profesor es de " << tipo << endl;
}