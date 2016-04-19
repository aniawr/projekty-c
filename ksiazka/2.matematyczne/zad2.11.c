#include <stdio.h>

int dwaPotega(int potega){
    int wynik = 1, licznik;
    for (licznik = 1; licznik <= potega; licznik++)
        wynik = 2 * wynik;
    return wynik;
}

double potegowanie(double podstawa, int potega){
    int wynik = 1, licznik;
    for (licznik = 1; licznik <= potega; licznik++)
        wynik = podstawa * wynik;
    return wynik;
}

int silnia(int liczba){
    int wynik = 1, licznik;
    for (licznik = 1; licznik <= liczba; licznik++)
        wynik *= licznik;
    return wynik;
}

int main(){
    int n = -1;
    double x = 0.0;

    do {
    printf("Podaj do jakiej potegi podniesc liczbe 2? (od 0 do 14)\n");
    scanf("%d", &n);
    } while (n < 0 && n > 14);
    printf("2 ^ %d = %d\n\n", n, dwaPotega(n));

    printf("Podaj postawe potegi\n");
    scanf("%lf", &x);
    printf("Podaj potege\n");
    scanf("%d", &n);
    printf("%lf ^ %d = %lf\n\n", x, n, potegowanie(x, n));

    do {
    printf("Podaj liczbe do wykonania silni (od 0 do 6)\n");
    scanf("%d", &n);
    } while (n < 0 && n > 6);
    printf("%d! = %d\n\n", n, silnia(n));

    // nie chce mi sie robic calego zadania

    getchar();
    getchar();
    return 0;
}
