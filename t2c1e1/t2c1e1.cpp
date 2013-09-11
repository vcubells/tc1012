// c3e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Hora {
private:
	int hora;  	//0-23
	int min;    //0-59
	int seg;	//0-59
public:
	Hora(void);	//constructor
	void establecerHora(int h, int m, int s);
	void imprimeHoraMilitar();
	void imprimeHoraNormal();
};

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
	cout << "La hora militar es: ";
	cout << hora << ":";
	cout << min << ":"; 
	cout << seg;
	cout << endl;
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
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Inicialización del objeto" << endl;
	Hora hora_normal;
	hora_normal.imprimeHoraNormal();
	
	cout << "Se establece una hora normal" << endl;
	hora_normal.establecerHora(8,15,12);
	hora_normal.imprimeHoraMilitar();
	hora_normal.imprimeHoraNormal();
	
	cout << "Se establece una hora militar" << endl;
	hora_normal.establecerHora(22,30,45);
	hora_normal.imprimeHoraMilitar();
	hora_normal.imprimeHoraNormal();

	system("pause");
	
	return 0;
}