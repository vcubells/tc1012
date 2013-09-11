#pragma once
#define MATERIAS 6

class Alumno
{
private:
	string nombre; 
	int calif[MATERIAS];

	//Funciones de utilidad
	float calcularPromedio();

public:
	Alumno(void);
	// Funciones Get y Set
	string getNombre();
	void setNombre(string n);
	int getCalif(int m);
	void setCalif(int m, int c);

	//Funciones de acceso
	void leerDatos();
	void imprimeDatos();

	~Alumno(void);
};

