#include <stdio.h>

int main()
{
	int liczba=0;
	for (liczba=0;liczba<=23;liczba++)
		printf("%d ", liczba);
	printf("\n");	
	
	liczba=0;
	while (liczba <=23){
		printf("%d ", liczba);
		liczba++;
	}
	printf("\n");
	
	liczba=0;
	do{
		printf("%d ", liczba);
		liczba++;		
	}while (liczba<=23);
			
	return 0;
}


