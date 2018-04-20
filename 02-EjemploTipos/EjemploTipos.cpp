/* MTP
* 20180420
* TiposDeDatos
*/

#include <iostream>
#include <cassert>

int main () {
	
	bool t=true;
	assert (!false==t);
	char a='a';
	assert ('a'==a);
	int z = 10;
	assert (20==z+10);
	double d=sqrt(2);
	assert (sqrt(2)==d);
	std :: string s1 = "Hola ";
	std :: string s2 = "Mundo!";
	std :: string s = s1+s2;
	unsigned n = s.length();
	assert (11==n);
	}