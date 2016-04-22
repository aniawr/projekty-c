#include <stdio.h>

void wypiszTablice(double tablica[], int dlugosc){
    int licznik;

    printf("Elementy tablicy:\n");
    for (licznik = dlugosc - 1; licznik >= 0; licznik--){
        printf("%lf ", tablica[licznik]);
    }
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

    wypiszTablice(dane, limit);
    getchar();
    getchar();
    return 0;
}
