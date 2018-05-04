#include <cassert>

double promedio(double, double);

int main (){
	assert (1 == promedio(1, 1));
	assert (2.5 == promedio(3, 2));
	assert (0 == promedio(0, 0));
	assert (-5 == promedio(-4, -6));
}

double promedio(double a, double b){return (a+b)/2.0;}