#include <stdio.h>

int main(){
	int n;
	int licznik;
	double wynik=0, liczba;
	printf ("Podaj ile bedzie liczb:\n");
	scanf ("%d",&n);
	for (licznik=1; licznik <= n; licznik++){
		printf("Podaj %d liczbe", licznik);
		scanf("%lf",&liczba);
		wynik += liczba;
		}
	printf("Suma liczb: %.2f\n", wynik);
	printf("Srednia arytmetyczna: %.2f", wynik/n);
	return 0;
}
