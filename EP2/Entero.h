#pragma once
class Entero
{
public:
	Entero(void);
	Entero(int n);
	~Entero(void);

	int getEntero() const;

	static int total;

	friend ostream & operator<<(ostream & os, Entero  & numero);
	friend bool operator<(Entero& n, Entero &n2);

private:
	int numero;
};

