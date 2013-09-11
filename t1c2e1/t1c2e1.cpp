// t1c2e1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/* Define el número de personas para los compiladores que no 
   soportan variables en la definición de un arreglo */
#define N 10	

typedef struct {
	char nombre[30];
	float calif;
}persona;

int main(int argc, char* argv[])
{
	/* Para compiladores que soportan variables en la declaración 
	   de un arreglo se pueden utilizar las siguientes 3 lineas y 
	   eliminar el #define N 10 */
	
	 /* int N;
	 cout << "Entre la cantidad de personas: ";
	 cin >> N; */
	
	persona lista[N];
	float suma  = 0;
	
	for(int i=0; i < N; ++i)
	{
		cout << "Datos de la persona " << i+1 <<":" << endl;
		cout << "Entra el nombre: ";
		cin >> lista[i].nombre;
		
		cout << "Entra la calificacion: ";
		cin >> lista[i].calif;
		suma += lista[i].calif;
		
		cout << endl;
	}
	
	float promedio = suma / N;
	
	cout << "El promedio del grupo es: " << promedio;

	system("pause");
	
	return 0;
}

