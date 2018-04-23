#include <iostream>
#include <cmath>
#include <cassert>

unsigned modulo (int);
unsigned modulo (int a) {
   return (sqrt(a*a));
}

int main() {
    assert (4==modulo(4));
    assert (4==modulo(-4));
    assert (0==modulo(0));
}
