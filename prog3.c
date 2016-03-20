#include <stdio.h>

int main () {
	int fahr, celsius;
	fahr = 320;
	printf("F \t C\n");
	
// petla while
//	while (fahr <= 300){
//		celsius = 5 * (fahr - 32) / 9;
//		printf("%d \t %d\n", fahr, celsius);
//		fahr = fahr + 20;
//	}

// petla for	
//	for (fahr = 0; fahr <= 300; fahr = fahr + 20){
//		printf("%d \t %.2lf\n", fahr, 5.0 * (fahr - 32) / 9);
//	}

// petla do while (co najmniej raz wykonana!)	
	do {
		printf("%d \t %.2lf\n", fahr, 5.0 * (fahr - 32) / 9);
		fahr = fahr + 20;
	} while (fahr <= 300);
	return 0;
	
}
