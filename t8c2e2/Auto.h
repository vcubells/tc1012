#pragma once
class Auto
{
public:
	Auto(void);
	Auto(string p):placas(p) { };
	~Auto(void);

	friend ostream & operator<<(ostream &os, Auto & a);
	string getPlacas() const;

private:
	string placas;
};

