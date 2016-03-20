#include <stdio.h>

int main () {
	int a, b;
	double c;
	c = 5;
	printf("Podaj dwie liczby oddzielajac spacja:");
	scanf("%d %d", &a, &b);
	printf("a = %d       b = %d      c = %lf\n", a, b, c);
	printf("suma = %d\n", a + b);
	printf("roznica = %d\n", a - b);
	printf("mnozenie = %d\n", a * b);
	printf("dzielenie calkowite = %d\n", a / b);
	printf("reszta z dzielenia = %d\n", a % b);
	
	printf("%d / %lf = %lf\n", a, c, a / c);
	return 0;
	
}
