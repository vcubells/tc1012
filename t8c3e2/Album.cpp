#include "StdAfx.h"
#include "Album.h"


Album::Album(void)
{
}

Album::~Album(void)
{
}

Album::Album(string tit, int an, string art):titulo(tit), anio(an), artista(art)
{
}

ostream & operator <<(ostream & os, Album & a)
{
	os << a.titulo << ", " << a.anio << ", " << a.artista << endl;
	for(int i=0; i < a.canciones.size(); ++i)
		os << a.canciones[i];
	return os;
}

void Album::Add(string tit, float dur)
{
	Cancion c(tit, dur);
	canciones.push_back(c);
}
