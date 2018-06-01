/*
MTP
TCursar
20180531
*/

#include <iostream>
#include <cassert>

enum struct Dia {lunes, martes, miercoles, jueves, viernes,sabado,domingo};
enum struct Turno {manana, tarde, noche};

int main () {
	bool tcursar (Dia, Turno);
	assert (tcursar (Dia::lunes, Turno::noche));
	assert (tcursar (Dia::jueves, Turno::noche));
	assert (not tcursar (Dia::martes, Turno::manana));
}

bool tcursar (Dia dia,Turno turno) {return
turno==Turno::noche and (dia==Dia::lunes or dia==Dia::jueves);
}
