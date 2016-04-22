#include <stdio.h>

double wezSuma(double tablica[], int limit){
    double suma = 0;
    int licznik;

    for (licznik = 0; licznik < limit; licznik++){
        suma += tablica[licznik];
    }
    return suma;
}

double wezIloczyn(double tablica[], int limit){
    double iloczyn = 1;
    int licznik;

    for (licznik = 0; licznik < limit; licznik++){
        iloczyn *= tablica[licznik];
    }
    return iloczyn;
}

double wezOdejmijDodaj(double tablica[], int limit){
    double suma = 0;
    int licznik;

    for (licznik = 0; licznik < limit; licznik++){
        if (licznik % 2 == 1)
            tablica[licznik] *= -1;
        suma += tablica[licznik];
    }
    return suma;
}

double wezSumaKwadratow(double tablica[], int limit){
    double suma = 0;
    int licznik;

    for (licznik = 0; licznik < limit; licznik++){
        suma += tablica[licznik] * tablica[licznik];
    }
    return suma;
}

int main(){
    int limit, licznik;

    printf("Podaj ile bedzie liczb:\n");
    scanf("%d", &limit);
    double dane[limit];

    for (licznik = 0; licznik < limit; licznik++){
        printf("Podaj %d liczbe:\n", licznik + 1);
        scanf("%lf", &dane[licznik]);
    }

    printf("Suma liczb wynosi %lf\n", wezSuma(dane, limit));
    printf("Iloczyn liczb wynosi %lf\n", wezIloczyn(dane, limit));
    printf("Dodawanie i odejmowanie naprzemienne liczb wynosi %lf\n", wezOdejmijDodaj(dane, limit));
    printf("Suma kwardratow liczb wynosi %lf\n", wezSumaKwadratow(dane, limit));
    getchar();
    getchar();
    return 0;
}
