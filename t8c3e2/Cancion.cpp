#include "StdAfx.h"
#include "Cancion.h"


Cancion::Cancion(void)
{
}


Cancion::~Cancion(void)
{
}

Cancion::Cancion(string tit, float dur):titulo(tit), duracion(dur)
{
}

ostream & operator <<(ostream & os, Cancion & c)
{
	return os << c.titulo << "(" << c.duracion << ")" << endl;
}