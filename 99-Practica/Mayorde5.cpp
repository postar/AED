/*MPT
20180512
mayorde5
*/
#include <cassert>
#include <iostream>
int main(){
	int mayorde5(int, int, int, int, int);
	int edad (int);
	std::cout<< mayorde5(edad, edad, edad, edad, edad);
}
int edad (int ed){
	std::cout << "Ingrese un Numero Natural /n";
	std::cin >> ed;
	return ed;
}
int mayorde5(int a,int b,int c,int d, int e){
	int mayparcial;
	int basura;
	a>=b? mayparcial=a:
		  mayparcial=b;

					 mayparcial<=c? mayparcial=c:
		 							basura=0	;

		 			   										mayparcial<=d? mayparcial=d:
		 			   													   basura=0	   ;

								 			   													  mayparcial<=e? mayparcial=e:
								 			   													  				 basura=0	 ;

}