#include <stdio.h>
#include <math.h>

int main(){
	int kat=0;
	for (kat = 0; kat <= 180; kat = kat+30){
		printf("sin(%d) = %.1f ;  ", kat, sin(kat*M_PI/180));
		printf("cos(%d) = %.1f \n", kat, cos(kat*M_PI/180));
		}
	return 0;
}
