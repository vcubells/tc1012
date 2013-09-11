#include "StdAfx.h"
#include "Vehiculo.h"


Vehiculo::Vehiculo(void)
{
}

Vehiculo::Vehiculo(string m): motor(m)
{
}



Vehiculo::~Vehiculo(void)
{
}

void Vehiculo::setMotor(string m)
{
	motor = m;
}

string Vehiculo::getMotor() const
{
	return motor;
}

void Vehiculo::imprime() const
{
	cout << endl << "Motor: " << motor << endl;
}
