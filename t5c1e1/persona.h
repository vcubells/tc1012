#pragma once
class persona
{
public:
	persona(void);
	persona(string n);
	~persona(void);

	void setNombre(string n);
	string getNombre() const;

	void imprime() const;

private:
	string nombre;
};

