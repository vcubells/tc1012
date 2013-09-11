#pragma once
#include "vehiculo.h"
class Barco :
	public Vehiculo
{
public:
	Barco(void);
	Barco(string m, int e);
	~Barco(void);

	void setEslora(int e);
	int getEslora() const;

	void imprime() const;

private:
	int eslora;
};

