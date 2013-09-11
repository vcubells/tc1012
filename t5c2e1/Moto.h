#pragma once
#include "auto.h"
class Moto :
	public Auto
{
public:
	Moto(void);
	Moto(string m, int ll, int c);
	~Moto(void);

	void setCilindraje(int c);
	int getCilindraje() const;

	void imprime() const;

private:
	int cilindraje;
};

