#pragma once
#include "superclase.h"
class Hija :
	public Superclase
{
public:
	Hija(void);
	Hija(string nombre, string apell): Superclase(nombre), apellido(apell) {}
	~Hija(void);

	friend ostream & operator <<(ostream & os, Hija & s)
	{
		return os << (Superclase)s << " y el apellido es: " << s.apellido << endl;
	}

	void virtual print() const
	{
		Superclase::print();
		cout << " y el apellido es: " << apellido << endl;
	}

private:
	string apellido;
};

