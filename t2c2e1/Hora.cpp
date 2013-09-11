#include "StdAfx.h"
#include "Hora.h"


Hora::Hora(void)
{
	hora = min = seg = 0;
}

void Hora::establecerHora(int h, int m, int s)
{
	hora = (h >= 0 && h < 24) ? h : 0;
	min  = (m >= 0 && m < 60) ? m : 0;
	seg  = (s >= 0 && s < 60) ? s : 0;
}

void Hora::imprimeHoraMilitar()
{
	std::cout << "La hora militar es: ";
	std::cout << hora << ":";
	std::cout << min << ":"; 
	std::cout << seg;
	std::cout << endl;
}

void Hora::imprimeHoraNormal()
{
	cout << "La hora normal es: ";
	cout << ((hora == 0 || hora == 12) ? 12 : ((hora < 12) ? hora : (hora % 12))) << ":";
	cout << min << ":"; 
	cout << seg << " ";
	cout << ((hora < 12) ? "AM" : "PM");
	cout << endl;
}

Hora::~Hora(void)
{
}
