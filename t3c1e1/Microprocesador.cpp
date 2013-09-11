#include "StdAfx.h"
#include "Microprocesador.h"


void Microprocesador::setFrecuencia(float f)
{
	frecuencia = f;
}

float Microprocesador::getFrecuencia() const
{
	return frecuencia;
}

void Microprocesador::setNucleos(int n)
{
	nucleos = n;
}

int Microprocesador::getNucleos() const
{
	return nucleos;
}

void Microprocesador::imprime() const
{
	cout << "Microprocesador: " << endl;
	cout << "Frecuencia: " << frecuencia << endl;
	cout << "Núcleos: " << nucleos << endl << endl;
}
