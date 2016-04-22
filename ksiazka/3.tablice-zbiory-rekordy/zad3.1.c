#include <stdio.h>

void wypiszTablice(int tablica[], int n){
    int dlugosc = n;
    int i;

    printf("Elementy tablicy kolejno: ");
    for (i = 0; i < dlugosc; i++)
        printf("%d, ", tablica[i]);
}

int main(){
    int max, licznik;

    printf("Ile bedzie liczb?\n");
    scanf("%d", &max);

    int dane[max];

    for (licznik = 0; licznik < max; licznik++){
        printf("Podaj %d liczbe\n", licznik + 1);
        scanf("%d", &dane[licznik]);
    }

    wypiszTablice(dane, max);
    getchar();
    getchar();
    return 0;
}
