#pragma once
#include "Producto.h"

#define N 3

typedef struct {
	Producto *p;
	int cantidad;
} Componente;

class Platillo
{
private:
	Componente componentes[N];
	int total;
public:
	Platillo(void);
	~Platillo(void);

	Platillo & agregarComponente(Producto *p, int cantidad);
	void show() const;
};

