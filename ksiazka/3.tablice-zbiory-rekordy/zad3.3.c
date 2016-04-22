#include <stdio.h>

void wypiszTablice(int tablica[], int dlugosc){
    int licznik;

    printf("Elementy tablicy:\n");
    for (licznik = 1; licznik < dlugosc; licznik++){
        printf("%d ", tablica[licznik]);
    }
    printf("%d ", tablica[0]);
}

int main(){
    int dane[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    wypiszTablice(dane, sizeof(dane) / sizeof(dane[0]));
    getchar();
    getchar();
    return 0;
}
