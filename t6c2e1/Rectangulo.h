#pragma once
#include "figura.h"
class Rectangulo :
	public Figura
{
public:
	Rectangulo(void);
	Rectangulo(float lado_a, float lado_b);
	virtual ~Rectangulo(void);

	virtual float area();
	virtual float perimetro();

	friend ostream & operator <<(ostream &os, Rectangulo &c);

private:
	float lado_a;
	float lado_b;
};

