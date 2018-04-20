#include <iostream>
#include <cassert>

unsigned modulo (int);
unsigned modulo (int a){
	
	bool b (a>0);
	bool c (a<0);
   return a * (b-c);

}

int main() {

    assert (4==modulo(4));
    assert (4==modulo(-4));
    assert (0==modulo(0));

}
