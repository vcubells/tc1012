#pragma once
class Figura
{
public:
	Figura(void);
	virtual ~Figura(void);

	virtual float area() {return 0.0; };
	virtual float perimetro() {return 0.0; };

	string getTipo() const;

	friend ostream & operator <<(ostream &os, Figura &c);

protected:
	string tipo;
};

