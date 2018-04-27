#include <cassert>
#include <iostream>

double c(double);
bool err(double, double, double);

int main () {
	double er = 0.01;
	assert (0==err(-17.7,c(0),er));
	std::cout << c (0);
	std::cout << err ( c(0),-17.7,er);
}

double c(double a){return (a-32)*5.0/9.0;}
bool err (double a, double b, double er){return (a-b) < er;}