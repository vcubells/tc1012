#include "StdAfx.h"
#include "Rectangulo.h"


Rectangulo::Rectangulo(void)
{
}

Rectangulo::Rectangulo(float lado_a, float lado_b): lado_a(lado_a), lado_b(lado_b)
{
	tipo = "Rectangulo";
}

Rectangulo::~Rectangulo(void)
{
}

float Rectangulo::area()
{
	return (lado_a * lado_b);
}

float Rectangulo::perimetro()
{
	return ( 2 * lado_a + 2 * lado_b );
}

ostream & operator <<(ostream &os, Rectangulo &c)
{
	os << "Lado a = " << c.lado_a << endl;
	os << "Lado b = " << c.lado_b << endl;
	os << "El area es : " << c.area() << endl;
	os << "El perimetro  es : " << c.perimetro() << endl;
	os << endl;

	return os;
}