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

bool esbiciesto (int a){return
	a%400==0 or a%4==0 and a%100!=0;}