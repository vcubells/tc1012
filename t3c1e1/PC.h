#pragma once
#include "Motherboard.h";
#include "Microprocesador.h";

class PC
{
private:
	Motherboard motherboard;
	Microprocesador micros[2];
	int pos;
public:
	PC(void);
	PC(Motherboard m, Microprocesador mp);

	void setMotherboard(Motherboard m);
	Motherboard getMotherboard() const;

	void setMicroprocesador(Microprocesador mp);
	Microprocesador getMicroprocesador(int p) const;

	void imprime() const;

	~PC(void);
};

