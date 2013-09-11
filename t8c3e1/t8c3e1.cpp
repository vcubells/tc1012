// t8c3e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	//Crear un mapa 
	map<string, string> lista;

	lista["A01"] = "Biaani";
	lista["A02"] = "Infame";
	lista["A03"] = "Rosa";
	lista["A04"] = "BCS";
	lista["A05"] = "Maria";
	lista["A06"] = "Sky";

	map<string, string>::const_iterator
		ini(lista.begin()),
		fin(lista.end());

	for(;ini != fin; ++ini)
	{
		cout << "El alumno " << ini->first << " es " << ini->second << endl;
	}


	
	
	return 0;
}

