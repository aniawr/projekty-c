#include <stdio.h>

void wypiszTablice(int tablica[], int n){
    int dlugosc = n - 1;
    int i;

    printf("Elementy tablicy kolejno: ");
    for (i = 0; i <= dlugosc; i++)
        printf("%d, ", tablica[i]);

    printf("\n\nElementy tablicy odwrotnie: ");
    for (i = dlugosc; i >= 0; i--)
        printf("%d, ", tablica[i]);
}

int main(){
    int dane[] = {-44, 5, 67, -2, 0, 33, 77};

    wypiszTablice(dane, sizeof(dane) / sizeof(dane[0]));

    return 0;
}
