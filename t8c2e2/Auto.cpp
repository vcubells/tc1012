#include "StdAfx.h"
#include "Auto.h"


Auto::Auto(void)
{
}

Auto::~Auto(void)
{
}

string Auto::getPlacas() const
{
	return placas;
}

ostream & operator<<(ostream &os, Auto & a)
{
	return os << "Placas: " << a.placas << endl;
}
