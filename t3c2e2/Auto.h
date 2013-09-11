#pragma once
#include "Opcion.h"

#define N 3

class Auto
{
private:
	Opcion *opciones;

public:
	Auto(void);
	~Auto(void);

	void show() const;
};

