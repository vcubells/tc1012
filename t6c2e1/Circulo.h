#pragma once
#include "figura.h"

#define PI 3.14159

class Circulo :
	public Figura
{
public:
	Circulo(void);
	Circulo(float radio);
	virtual ~Circulo(void);

	virtual float area();
	virtual float perimetro();

	friend ostream & operator <<(ostream &os, Circulo &c);

private:
	float radio;
};

