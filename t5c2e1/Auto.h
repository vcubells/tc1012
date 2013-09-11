#pragma once
#include "vehiculo.h"
class Auto :
	public Vehiculo
{
public:
	Auto(void);
	Auto(string m, int ll);
	~Auto(void);

	void setLlantas(int ll);
	int getLlantas() const;

	void imprime() const;

private:
	int llantas;
};

