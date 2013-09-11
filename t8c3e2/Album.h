#pragma once
#include "Cancion.h"

class Album
{
public:
	Album(void);
	Album(string, int, string);
	~Album(void);

	friend ostream & operator << (ostream & os, Album & a);
	void Add(string, float);

private:
	string titulo;
	int anio;
	string artista;
	vector<Cancion> canciones;
};

