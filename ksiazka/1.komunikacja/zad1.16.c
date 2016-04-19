#include <stdio.h>
#include <ctype.h>

int main(){
	char znak;

	printf("Wpisz jakis tekst:\n");

	while (znak != '\n')	{
		znak = getchar();
		if (znak >= 'a' && znak <= 'z'){
			putchar(toupper(znak));
		}
		else
			putchar(znak);
	}
	return 0;
}
