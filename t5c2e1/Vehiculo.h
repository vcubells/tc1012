#pragma once
class Vehiculo
{
public:
	Vehiculo(void);
	Vehiculo(string m);
	~Vehiculo(void);
	void setMotor(string m);
	string getMotor() const;
	void imprime() const;

private:
	string motor;
};

