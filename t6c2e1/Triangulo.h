#pragma once
#include "figura.h"
class Triangulo :
	public Figura
{
public:
	Triangulo(void);
	Triangulo(float base, float altura);
	~Triangulo(void);

	virtual float area();
	virtual float perimetro();

	friend ostream & operator <<(ostream &os, Triangulo &c);

private:
	float base;
	float altura;
};

