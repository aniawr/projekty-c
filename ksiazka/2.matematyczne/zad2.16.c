#include <stdio.h>

void czyBedzieTrojkat(double a, double b, double c){
    if (a < b + c && b < c + a && c < b + a)
        printf("Mozna stworzyc trojkat");
    else
        printf("Nie mozna stworzyc trojkata");
}

int main(){
    double a, b, c;

    do {
        printf("Podaj dlugosci bokow trojkata. Musza byc wieksze od 0 i oddzielone spacja\n");
        scanf("%lf %lf %lf", &a, &b, &c);
    } while (a <= 0 || b <= 0 || c <= 0);

    czyBedzieTrojkat(a, b, c);

    getchar();
    getchar();
    return 0;
}
