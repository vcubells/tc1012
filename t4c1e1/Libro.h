#pragma once
class Libro
{
private:
	long ISBN;
	int no_pags;

public:
	Libro(void);
	Libro(long isbn, int np);
	~Libro(void);

	long getISBN() const { return ISBN; }
	int getPaginas() const { return no_pags; }

	bool operator < (const Libro & libro) const;

	bool operator == (const Libro & libro) const;
};

