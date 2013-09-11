#pragma once
ref class Deporte
{
public:
	Deporte(void);
	Deporte(System::String^, System::String^, int);

	System::String^ getNombre();
	System::String^ getFederacion();
	int getJugadores();

private:
	System::String^ nombre;
	System::String^ federacion;
	int jugadores;
};

