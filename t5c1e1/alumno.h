#pragma once
#include "persona.h"
class alumno : public persona
{
public:
	alumno(void);
	alumno(string n, string m);
	~alumno(void);

	void setMatricula(string m);
	string getMatricula() const;
	void imprime() const;

private:
	string matricula;
};

