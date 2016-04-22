#include <stdio.h>

void sprawdzTablice(int tablica[], int dlugosc){
    int licznik, czySameZera = 0;
    if (tablica[0] > 0)
        printf("Pierwsza liczba ci¹gu: %d jest dodatnia\n", tablica[0]);
    else
        printf("Pierwsza liczba ci¹gu: %d jest ujemna lub rowna 0\n", tablica[0]);

    for (licznik = 0; licznik < dlugosc; licznik++){
        if (!tablica[0])
            czySameZera++;
    }
    if (czySameZera == dlugosc)
        printf("Ciag zawiera same zera\n");
}

int main(){
    int limit, licznik;

    printf("Podaj ile bedzie liczb:\n");
    scanf("%d", &limit);
    int dane[limit];

    for (licznik = 0; licznik < limit; licznik++){
        printf("Podaj %d liczbe:\n", licznik + 1);
        scanf("%d", &dane[licznik]);
    }

    sprawdzTablice(dane, limit);
    getchar();
    getchar();
    return 0;
}
