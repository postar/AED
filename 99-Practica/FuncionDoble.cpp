#include <cassert>

int doble (int);

int main (){
	assert (4==doble(2));
	assert (-4==doble(-2));
	assert (0==doble(0));
}
int doble (int a){return 2*a;}