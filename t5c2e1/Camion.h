#pragma once
#include "auto.h"
class Camion :
	public Auto
{
public:
	Camion(void);
	Camion(string m, int ll, int e);
	~Camion(void);

	void setEjes(int);
	int getEjes() const;

	void imprime() const;

private:
	int ejes;
};

