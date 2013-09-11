#pragma once
#include "vehiculo.h"
class Avion :
	public Vehiculo
{
public:
	Avion(void);
	Avion(string m, int t);
	~Avion(void);

	void setTurbinas(int t);
	int getTurbinas() const;

	void imprime() const;

private:
	int turbinas;
};

