#include "StdAfx.h"
#include "Libro.h"


Libro::Libro(void)
{
}

Libro::Libro(long isbn, int np)
{
	ISBN = isbn;
	no_pags = np;
}

Libro::~Libro(void)
{
}

bool Libro::operator < (const Libro & libro) const
{
	//return this->getISBN() < libro.getISBN();
	return this->getPaginas() < libro.getPaginas();
}

bool Libro::operator == (const Libro & libro) const
{
	//return (this->getISBN() == libro.getISBN());
	return this->getPaginas() == libro.getPaginas();
}

