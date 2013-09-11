#pragma once

#define N 5

template <class T>
class Plantilla
{
public:
	Plantilla(void);
	Plantilla(T lista[]);
	~Plantilla(void);

	T suma() const;

private:
	T elementos[N];

};

template <class T>
Plantilla<T>::Plantilla(void)
{
	elementos[0] = 0;
	elementos[1] = 0;
	elementos[2] = 0;
	elementos[3] = 0;
	elementos[4] = 0;
}

template <class T>
Plantilla<T>::Plantilla(T lista[])
{
	for(int i=0; i< N; ++i)
		elementos[i] = lista[i];
}

template <class T>
Plantilla<T>::~Plantilla(void)
{
}

template <class T>
T Plantilla<T>::suma() const
{
	T count = elementos[0];
	for(int i=1; i < N; ++i)
		count += elementos[i];

	return count;
}

