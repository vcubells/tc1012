#include "StdAfx.h"
#include "PC.h"


PC::PC(void)
{
}

PC::PC(Motherboard m, Microprocesador mp)
{
	pos = 0;
	motherboard = m;
	micros[pos++] = mp;
}

void PC::setMotherboard(Motherboard m)
{
	motherboard = m;
}

Motherboard PC::getMotherboard() const
{
	return motherboard;
}

void PC::setMicroprocesador(Microprocesador mp)
{
	if (pos > 1)
		cout << "Ya no se pueden adicionar más microprocesadores a la PC" << endl;
	else {
		micros[pos++] = mp;
	}
}

Microprocesador PC::getMicroprocesador(int p) const
{
	if (p >=0 && p < pos)
		return micros[p];
	else {
		cout << "El indice especicado no es valido" << endl;
		return micros[0];
	}
}

void PC::imprime() const
{
	cout << "Computadora: " << endl;
	motherboard.imprime();

	for(int i=0; i < pos; ++i)
	{
		micros[i].imprime();
	}
}


PC::~PC(void)
{
}
