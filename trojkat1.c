#include<stdio.h>
#define znak '*' //znak wypelnienia oznacza to znajdz znak i zamien na *

main ()
{	int lbwier ; //calkowita liczba
	int lw ; //licznik wierszy
	int lodst ;
	int j ;

	printf ("ile wierszy?");
	scanf ("%d", &lbwier);
	
	for (lw = 0; lw < lbwier; lw++)
	{	lodst = lbwier - lw - 1;
		for (j=0 ; j<lodst; j++) putchar (' '); // liczy ilosc spacji i je wyswietla
		for (j=0 ; j<2*lw+1 ; j++) putchar (znak); //liczy i wyswietla ilosc gwiazdek i zwieksza
		putchar ('\n') ;
	}
	return 0;
}
