// t6c3e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int suma(int a, int b)
{
	return a + b;
}

float suma(float a, float b)
{
	return a + b;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int e1 = 5, e2 = 8;
	float f1 = 3.5, f2 = 5.5;

	cout << " La suma de enteros es: " << suma(e1, e2) << endl;
	cout << " La suma de flotantes es : " << suma(f1, f2) << endl;

	return 0;
}

