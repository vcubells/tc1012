#include "StdAfx.h"
#include "Triangulo.h"


Triangulo::Triangulo(void)
{
}

Triangulo::Triangulo(float base, float altura): base(base), altura(altura)
{
	tipo = "Triangulo";
}

Triangulo::~Triangulo(void)
{
}

float Triangulo::area()
{
	return (base * altura);
}

float Triangulo::perimetro()
{
	return ( 3 * base );
}

ostream & operator <<(ostream &os, Triangulo &c)
{
	os << "Base = " << c.base << endl;
	os << "Altura = " << c.altura << endl;
	os << "El area es : " << c.area() << endl;
	os << "El perimetro  es : " << c.perimetro() << endl;
	os << endl;

	return os;
}
