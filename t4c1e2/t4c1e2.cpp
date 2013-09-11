// t4c1e2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

enum Dias{ Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo }; 

bool operator!=(Dias &d, Dias &d1)
{
	return ((int)d != (int)d1);
}


Dias & operator++(Dias &d) {

	if (d == Domingo) return (d = Lunes);

	int temp = d;

	return (d = static_cast<Dias> (++temp));
} 

ostream& operator<<(ostream& os, Dias &d) 
{
    switch (d) { 
		case Lunes: 
			return os << "Lunes"; 

		case Martes: 
			return os << "Martes"; 

		case Miercoles:
			return os << "Miércoles"; 

		case Jueves:
			return os << "Jueves"; 

		case Viernes:
			return os << "Viernes"; 

		case Sabado:
			return os << "Sábado"; 

		case Domingo: 
			return os << "Domingo"; 

		default: 
			return os << "Inválido";
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	for (Dias dia = Lunes; dia != Domingo; ++dia) {
		cout << dia << endl;
	}

	return 0;

}
