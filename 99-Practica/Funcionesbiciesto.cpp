/* MTP
* 20180503
* esBiciesto
*/
#include <cassert>

bool esbiciesto(int);

int main () {
assert (1==esbiciesto(2000));
assert (0==esbiciesto(2001));
assert (1!=esbiciesto(2003));
}

bool esbiciesto (int a){return
	a%400==0 or a%4==0 and a%100!=0;}