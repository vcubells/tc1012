// t8c3e2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Album.h"

int _tmain(int argc, _TCHAR* argv[])
{
	map<string, Album> coleccion;

	Album romanceI("Romance I", 1998, "Luis Miguel");
	romanceI.Add("Entregate", 3.40);
	romanceI.Add("Dame tu amor", 2.55);
	romanceI.Add("Reloj", 3.07);

	coleccion["luismi"] = romanceI;

	Album eternamiente("Eternamiente", 2007, "Molotov");
	eternamiente.Add("Yofo", 4.0);
	eternamiente.Add("Guacala que rico", 3.22);
	eternamiente.Add("No deje que el peje lo atonte", 5.40);

	coleccion["molotov"] = eternamiente;

	//Imprimir coleccion musical
	map<string, Album>::const_reverse_iterator
		ini(coleccion.rbegin()),
		fin(coleccion.rend());

	for (; ini != fin; ++ini)
		cout << (Album)ini->second << endl;
	
	return 0;
}

