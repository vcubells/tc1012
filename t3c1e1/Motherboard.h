#pragma once
class Motherboard
{
private:
	float frecuencia;
	string socket;
public:
	Motherboard(void) {};
	Motherboard(float f, string s):frecuencia(f), socket(s){};
	
	void setFrecuencia(float f);
	float getFrecuencia() const;

	void setSocket(string s);
	string getSocket() const;

	void imprime() const;

	~Motherboard(void){};
};

