#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c;
	double delta;

	printf("Podaj kolejno po spacji: a b c:\n");
	scanf("%lf %lf %lf", &a, &b, &c);

	delta = (b * b) - (4 * a * c);

	if (delta > 0)
		printf("Delta wynosi %lf i ma dwa pierwiastki: x1 = %.3lf i x2 = %.3lf", delta, (-b - sqrt(delta)) / (2 * a), (-b + sqrt(delta)) / (2 * a));
	else if (delta == 0)
		printf("Delta wynosi %lf i ma jeden pierwiastek: x0 = %.3lf", delta, (-b) / (2 * a));
	else if (delta < 0)
		printf("Delta wynosi %lf i nie posiada pierwiastkow", delta);
    getchar();
    getchar();
	return 0;
}
