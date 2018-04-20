#include <iostream>
#include <cassert>

unsigned modulo (int);
unsigned modulo (int a){
   return a * ((a>0)-(a<0));
}
int main() {
    assert (4==modulo(4));
    assert (4==modulo(-4));
    
}
