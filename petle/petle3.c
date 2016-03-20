#include <stdio.h>

int main()

{
	int liczba,licznik;
	printf ("Podaj liczbe:\n");
	scanf ("%d",&licznik);
	printf("\n");
	for (liczba=1;liczba<=licznik;liczba++)
		printf("%d ", liczba*liczba);
	printf("\n");
	for (liczba=1;liczba<=licznik;liczba++)
		printf("%d ", liczba*liczba*liczba);
	printf("\n");
	
	liczba=1;
	while (liczba <=licznik){
		printf("%d ", liczba*liczba);
		liczba++;
	}
	printf("\n");
	
	liczba=1;
	while (liczba <=licznik){
		printf("%d ", liczba*liczba*liczba);
		liczba++;
	}
	printf("\n");
	
	liczba=1;
	do{
		printf("%d ", liczba*liczba);
		liczba++;		
	}while (liczba<=licznik);
	
	printf("\n");
	
	liczba=1;
	do{
		printf("%d ", liczba*liczba*liczba);
		liczba++;		
	}while (liczba<=licznik);
}
