#include "StdAfx.h"
#include "Direccion.h"


Direccion::Direccion(void)
{
	Direccion("", 0, 0, "", 0);
}

Direccion::Direccion(string calle, int ext, int interior, 
	string col, int cp) : calle(calle), exterior(ext), interior(interior),
	colonia(col), cp(cp)
{
}

ostream& operator<<(ostream& os, Direccion &d)
{
	return os << "Calle " << d.calle 
		<< ", No exterior " << d.exterior
		<< ", No interior " << d.interior
		<< ", Col. " << d.colonia
		<< ", CP. " << d.cp << endl;
}

bool Direccion::operator==(Direccion &d2)
{
	return ( (this->calle == d2.calle) &&
		  (this->exterior == d2.exterior) &&
		  (this->interior == d2.interior) &&
		  (this->colonia == d2.colonia) &&
		  (this->cp == d2.cp) );
}

Direccion & Direccion::operator+(Direccion &d2)
{
	Direccion *d = new Direccion("", 0, 0, "", 0);
	d->exterior =  this->exterior + d2.exterior;
	return *d;
}

int Direccion::getExterior() const
{
	return exterior;
}

Direccion::~Direccion(void)
{
}
