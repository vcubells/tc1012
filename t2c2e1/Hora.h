#pragma once
class Hora
{
private:
	int hora;  	//0-23
	int min;    //0-59
	int seg;	//0-59
public:
	Hora(void);	//constructor
	void establecerHora(int h, int m, int s);
	void imprimeHoraMilitar();
	void imprimeHoraNormal();
	~Hora(void);
};

