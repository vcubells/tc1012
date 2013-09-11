#pragma once
class Persona
{
public:
	Persona(void);
	Persona(string n);
	virtual ~Persona(void);

	virtual void imprime() const;
private:
	string nombre;
};

