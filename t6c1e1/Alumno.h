#pragma once
#include "persona.h"
class Alumno :
	public Persona
{
public:
	Alumno(void);
	Alumno(string n, string m);
	virtual ~Alumno(void);

	virtual void imprime() const;

private:
	string matricula;
};

