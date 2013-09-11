#include "StdAfx.h"
#include "Motherboard.h"


void Motherboard::setFrecuencia(float f)
{
	frecuencia = f;
}

float Motherboard::getFrecuencia() const
{
	return frecuencia;
}

void Motherboard::setSocket(string s)
{
	socket = s;
}

string Motherboard::getSocket() const
{
	return socket;
}

void Motherboard::imprime() const
{
	cout << "Motherboard: " << endl;
	cout << "Frecuencia: " << frecuencia << endl;
	cout << "Socket: " << socket << endl << endl;
}
