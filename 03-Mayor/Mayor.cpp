/* MTP
* 20180424
* Mayor
*/

#include <iostream>
#include <cassert>

int mayor(int);
int mayor(int a,int b){
	return (a*(a>b)+b*(b>a));
}

int main(){
	assert (5==mayor (3,5));
	assert (-3==mayor (-3, -5));
	assert (0==mayor (0,0));
	assert (3==mayor (-5, 3));
}
