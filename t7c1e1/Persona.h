#pragma once
class Persona
{
public:
	Persona(void);
	Persona(int e):edad(e){};
	~Persona(void);

	Persona& operator +=(const Persona &p)
	{
		this->edad += p.edad;
		return *this;
	}

	int getEdad() const
	{
		return edad;
	}

private:
	int edad;
};

