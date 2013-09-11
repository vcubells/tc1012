#include "StdAfx.h"
#include "Opcion.h"


Opcion::Opcion(void)
{
	descripcion = "No definida";
}


Opcion::~Opcion(void)
{
}

void Opcion::show() const
{
	cout << descripcion << endl;
}
