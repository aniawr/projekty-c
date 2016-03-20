#include <stdio.h>

int main(){
	char znak = 0;
	printf("Wpisz jakis znak:");
	while ((znak = getchar())!= 'x')
		putchar(znak) ;
	return 0;
}
