#include <stdio.h>

main()
{
	int u1, u2, u3 ; //na kolejne wyrazy ciagu//
	int n ; //numer wyrazu//
	int i; //licznik//
	
do
	{	printf ("Podaj numer wyrazu (co najmniej 3): ");
		scanf ("%d" , &n);
	}
while (n<3);

u2= u1 =1; //dwa pierwsze wyrazy
i=2 ;
while (i++ <n) //uwaga dziala tylko dla n>2
	{
		u3 = u1+u2;
		u1 = u2;
		u2 = u3;
	}
	// inna mozliwosc //
	//for (i=3 ; i=<n ; i++, u1=2, u2=3) u3 = u1 + u2
printf("wyraz o numerze %d ma wartosc %d " , n , u3);
return 0;
}


