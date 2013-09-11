#include "StdAfx.h"
#include "Auto.h"


Auto::Auto(void)
{
	opciones = new Opcion[N];
}


Auto::~Auto(void)
{
	delete[] opciones;
}

void Auto::show() const
{
	Opcion *tmp;
	tmp = opciones;

	for(; tmp < (opciones + N); ++tmp)
	{
		tmp->show();
	}
}
