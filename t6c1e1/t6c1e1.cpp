// t6c1e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Alumno.h"
#include "Profesor.h"

#define N 3

int _tmain(int argc, _TCHAR* argv[])
{
	Persona *personas[N];

	Persona *p = new Persona("pepito");
	personas[0] = p;

	Alumno *a = new Alumno("Alberta", "A0013456");
	personas[1] = a;

	Profesor *pr = new Profesor("Javier", "Objetivo");
	personas[2] = pr;

	for (int i = 0; i < N; ++i)
	{
		personas[i]->imprime();
	}

	delete p;
	delete a;
	delete pr;
}

