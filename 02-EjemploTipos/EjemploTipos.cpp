/* MTP
* 20180418
* TiposDeDatos
*/

#include <iostream>
#include <assert.h>

int main () {
	std :: cout << "Soy un Bool y si soy verdadero devuelvo\n";
	std :: cout << bool(true);
	std :: cout << "\n";
	std :: cout << "O Falso si devuelvo\n";
	std :: cout << bool(false);
	std :: cout << "\n";
	std :: cout << "\n";
	std :: cout << "Soy un int y puedo mostar cualquie numero entero como el\n";
	std :: cout << int(1);
	std :: cout << "\n";
	std :: cout << "\n";
	std :: cout << "Soy un Double y puedo mostar un gran espectro de los numeros reales como por ejemplo\n";
	std :: cout << double(3.1415);
	std :: cout << "\n";
	std :: cout << "\n";
	std :: cout << "Soy un caracter y puedo mostrar cualquier simbolo del alfabeto ASCII\n";
	std :: cout << char('A');
	std :: cout << "\n";
	std :: cout << "\n";
	std :: cout << "Y yo soy un string, no necesito una introduccion porque conmigo se pueden escribir oraciones\n";
	std :: cout << "Tambien puedo demostar que 1 es distinto de 1 si se usan distintos tipos de dato, en este caso char e int \n";
	int a = 5;
	char b = '5';
	std :: cout << "Este es el valor del int a: ";
	std :: cout << a;
	std :: cout << "\n";
	std :: cout << "Este es el valor del char b: ";
	std :: cout << b;
	std :: cout << "\n";
	std :: cout << "si hacemos que la maquina los compare pasa esto\n";
	std:assert(a==b);
	}
