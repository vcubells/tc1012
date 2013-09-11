#include "StdAfx.h"
#include "Circulo.h"



Circulo::Circulo(void)
{
}

Circulo::Circulo(float radio): radio(radio)
{
	tipo = "Circulo";
}

Circulo::~Circulo(void)
{
}

float Circulo::area()
{
	return (PI * radio * radio);
}

float Circulo::perimetro()
{
	return ( 2 * PI * radio );
}

ostream & operator <<(ostream &os, Circulo &c)
{
	os << (Figura)c;
	os << " Radio = " << c.radio << endl;
	os << " El area es : " << c.area() << endl;
	os << " El perimetro  es : " << c.perimetro() << endl;
	os << endl;

	return os;
}