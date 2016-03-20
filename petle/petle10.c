#include <stdio.h>

int main(){
	int pierwsza, druga;
	for (pierwsza = 1; pierwsza <= 13 ; pierwsza++){
	
		for (druga = 1; druga <= 13 ; druga++){
			printf("%5d",pierwsza * druga);
		}
		printf("\n");
	}
	return 0;
}
