#pragma once
class Microprocesador
{
private:
	int nucleos;
	float frecuencia;
public:
	Microprocesador(void) {};
	Microprocesador(int n, float f):nucleos(n), frecuencia(f) {};

	void setFrecuencia(float f);
	float getFrecuencia() const;

	void setNucleos(int n);
	int getNucleos() const;

	void imprime() const;

	~Microprocesador(void) {};
};

