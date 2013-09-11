// c7e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PC.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Motherboard asus(2.6, "45 nm");
	Microprocesador intel(2, 2.53);

	PC laptop(asus, intel);

	Microprocesador intel2(4, 2.53);
	laptop.setMicroprocesador(intel2);

	laptop.imprime();

	system("pause");

	return 0;
}

