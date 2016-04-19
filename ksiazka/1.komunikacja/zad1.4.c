#include <stdio.h>

double przeciwna(double i){
    return -i;
}

double dwaRazyWieksza(double i){
    return 2 * i;
}

double odwrotnosc(double i){
    return 1 / i;
}

int main(){
    double liczba;

    printf("Podaj liczbe: \n");
    scanf("%lf", &liczba);

    printf("Podano liczbe %lf\n", liczba);

    printf("Odwrotnosc liczby to %lf\n", przeciwna(liczba));

    printf("Liczba 2 razy wieksza to %lf\n", dwaRazyWieksza(liczba));
    if (liczba != 0)
        printf("Odwrotnosc liczby to %lf\n", odwrotnosc(liczba));
    else
        printf("Podana liczba to 0, wiec nie mozna wykonac odwrotnosci.");
    getchar();

    return 0;
}
