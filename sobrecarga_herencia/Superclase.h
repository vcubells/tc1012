#pragma once
class Superclase
{
public:
	Superclase(void);
	Superclase(string nombre):nombre(nombre){}

	~Superclase(void);

	friend ostream & operator <<(ostream & os, Superclase & s)
	{
		return os << "El nombre es: " << s.nombre << endl;
	}

	void virtual print() const
	{
		cout << "El nombre es: " << nombre << endl;
	}

private:
	string nombre;
};

