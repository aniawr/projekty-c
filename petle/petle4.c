#include <stdio.h>

int main(){
	int liczba, wynik=0;
	for (liczba=3;liczba<=15;liczba++){
		wynik += liczba*liczba;
	}
	printf("%d ", wynik);
	printf("\n");
	
	liczba=3;
	wynik=0;
	while (liczba <=15){
		wynik += liczba*liczba;
		liczba++;
	}
	printf("%d ", wynik);
	printf("\n");
	
		
}
