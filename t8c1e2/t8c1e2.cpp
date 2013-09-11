// t8c1e2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	vector<float> precios(5, 10);
	precios.push_back(5.67);
	precios.push_back(8.9);
	precios.push_back(10.45);

	for(int i=0; i < precios.size(); ++i)
		cout << precios[i] << endl;
	return 0;
}

