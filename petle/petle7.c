#include <stdio.h>

int main(){
	char znak;
	for (znak = 'a'; znak <= 'k'; znak++)
		printf("Litera: %4c, Wartosc dziesietna: %4d, Wartosc szczesnatkowa: %4x\n", znak, znak, znak);
	
	return 0;
}
