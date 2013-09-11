#pragma once
#include "entero.h"
class Binario :
	public Entero
{
public:
	Binario(void);
	Binario(int n);
	~Binario(void);

	static int total;

	friend ostream & operator<<(ostream & os, Binario  & numero);
	friend bool operator<(Binario & n, Binario &n2);

private:
	int bin[8];

	void init();
	void convierte();
};

