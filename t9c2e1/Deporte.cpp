#include "StdAfx.h"
#include "Deporte.h"


Deporte::Deporte(void)
{
}

Deporte::Deporte(System::String^ n, System::String^ f, int j):nombre(n), federacion(f), jugadores(j)
{
}

System::String^ Deporte::getNombre()
{
	return nombre;
}

System::String^ Deporte::getFederacion()
{
	return federacion;
}

int Deporte::getJugadores()
{
	return jugadores;
}
