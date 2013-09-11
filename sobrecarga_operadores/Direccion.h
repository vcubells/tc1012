#pragma once
class Direccion
{
public:
	Direccion(void);
	Direccion(string calle, int ext, int interior, string col, int cp);
	~Direccion(void);

	int getExterior() const;

	friend ostream& operator<<(ostream& os, Direccion &d); 
	bool operator==(Direccion &d2);
	Direccion & operator+(Direccion &d2);

private:
	string calle;
	int	exterior;
	int interior;
	string colonia;
	int cp;


};

