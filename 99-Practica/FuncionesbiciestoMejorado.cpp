/* MTP
* 20180510
* esbiciesto
*/
#include <cassert>

bool esbiciesto(int);

int main () {
assert (	esbiciesto(2000) );
assert (not esbiciesto(2001) );
assert (not esbiciesto(2003) );
assert (not esbiciesto(1900) );
assert (	esbiciesto (4)   );
assert (	esbiciesto (2016));
}

bool esbiciesto (int anio){return
	anio%4==0 and (anio%100!=0 or anio%400==0);
}