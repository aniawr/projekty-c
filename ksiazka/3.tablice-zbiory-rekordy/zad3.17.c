#include <stdio.h>

void tablicaA(int tablica[], int dlugosc){
    int tablicaZmieniona[dlugosc];
    int polTablicy = (dlugosc / 2);
    int licznik1, licznik2;

    licznik1 = licznik2 = 0;
    while (licznik1 < dlugosc){
        tablicaZmieniona[licznik1] = tablica[licznik2];
        licznik1++;
        tablicaZmieniona[licznik1] = tablica[polTablicy];
        polTablicy++;
        licznik1++;
        licznik2++;
    }
    for (licznik1 = 0; licznik1 < dlugosc; licznik1++){
        printf("%d ",tablicaZmieniona[licznik1]);
    }
}

void tablicaB(int tablica[], int dlugosc){
    int tablicaZmieniona[dlugosc];
    int polTablicy = (dlugosc / 2);
    int licznik1, licznik2;

    licznik1 = licznik2 = 0;
    while (licznik1 < dlugosc){
        tablicaZmieniona[licznik1] = tablica[licznik2];
        licznik1++;
        tablicaZmieniona[licznik1] = tablica[polTablicy];
        polTablicy++;
        licznik1++;
        licznik2++;
    }
    for (licznik1 = 0; licznik1 < dlugosc; licznik1++){
        printf("%d ",tablicaZmieniona[licznik1]);
    }
}

int main(){
    int dane[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    tablicaA(dane, sizeof(dane) / sizeof(dane[0]));
    getchar();
    getchar();
    return 0;
}
