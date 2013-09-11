// c4e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Hora.h"

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

