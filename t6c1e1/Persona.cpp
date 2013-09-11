#include "StdAfx.h"
#include "Persona.h"


Persona::Persona(void)
{
}

Persona::Persona(string n):nombre(n)
{
}

Persona::~Persona(void)
{
}

void Persona::imprime() const
{
	cout << "El nombre de la persona es: " << nombre << endl;
}