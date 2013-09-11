#pragma once
#include "persona.h"
class Profesor :
	public Persona
{
public:
	Profesor(void);
	Profesor(string n, string tipo);
	virtual ~Profesor(void);

	virtual void imprime() const;

private:
	string tipo;
};

