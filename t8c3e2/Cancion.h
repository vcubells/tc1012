#pragma once
class Cancion
{
public:
	Cancion(void);
	Cancion(string, float);
	~Cancion(void);
	friend ostream& operator<<(ostream &os, Cancion &c);
private:
	string titulo;
	float duracion;
};

