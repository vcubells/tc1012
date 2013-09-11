// c10e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Auto.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Auto *car = new Auto();
	car->show();

	delete car;

	system("pause");
	return 0;
}

