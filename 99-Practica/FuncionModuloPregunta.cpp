#include <iostream>
#include <cassert>

unsigned modulo (int);

int main() {
    assert (4==modulo(4));
    assert (4==modulo(-4));
    assert (0==modulo(0));
}

unsigned modulo (int a){return n>=0 ? n : -n;}
