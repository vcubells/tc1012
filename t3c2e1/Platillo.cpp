#include "StdAfx.h"
#include "Platillo.h"


Platillo::Platillo(void)
{
	Producto p;
	Componente c;
	c.cantidad = 0;
	c.p = &p;
	for (int i=0; i < N; ++i)
	{
		this->componentes[i] = c;
	}

	this->total = 0;
}


Platillo::~Platillo(void)
{
}

Platillo & Platillo::agregarComponente(Producto *p, int cantidad)
{
	if (p->getStock() >= cantidad)
	{
		if (total < N)
		{
			Componente c;
			c.cantidad = cantidad;
			c.p = p;
			this->componentes[this->total++] = c;

			p->setStock( p->getStock() - cantidad );
		}
		else {
			cout << "No admite mas componentes" << endl;
		}
	}
	else {
		cout << "No hay disponibilidad del producto pedido" << endl;
	}

	return *this;
}

void Platillo::show() const
{
	float costoTotal = 0;
	float costoProducto = 0;

	for(int i=0; i < this->total; ++i)
	{
		cout << "Componente " << (i+1) << " : " << endl;
		cout << "Producto: " << this->componentes[i].p->getDescripcion() << endl;
		cout << "Cantidad: " << this->componentes[i].cantidad << endl;

		costoProducto = this->componentes[i].p->getPrecio() * this->componentes[i].cantidad;
		cout << "Costo: $" << costoProducto << endl << endl;

		costoTotal += costoProducto;
	}

	cout << "Costo total del platillo: $" << costoTotal << endl << endl;
}
