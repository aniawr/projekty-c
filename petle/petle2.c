#include <stdio.h>

int main()
{
	double liczba;
	for (liczba=-3.5;liczba<=7.5;liczba=liczba+0.5)
		printf ("%.1f ", liczba);
	
	printf("\n");
	liczba=-3.5;
	while(liczba<=7.5){
		printf("%.1f ", liczba);
		liczba=liczba+0.5;
	}
		
	return 0;
}
