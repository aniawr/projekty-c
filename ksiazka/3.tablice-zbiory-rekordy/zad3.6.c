#include <stdio.h>

void sprawdzTablice(int tablica[], int dlugosc){
    int liczba, licznik;
    int licznikWystapienLiczby[dlugosc];
    int tablicaPowtorzonychLiczb[dlugosc];
    int liczbaWystapila = 0;

    // zerowanie tablic, by mozna bylo robic porownania
    for (liczba = 0; liczba < dlugosc; liczba++){
        licznikWystapienLiczby[liczba] = 0;
        tablicaPowtorzonychLiczb[liczba] = 0;
    }
    //sprawdzanie czy wystepuje dana liczba
    for (liczba = 0; liczba < dlugosc; liczba++){
        licznik = 0;
        liczbaWystapila = 0;
        while (licznikWystapienLiczby[licznik] > 0 && !liczbaWystapila){
            if (tablicaPowtorzonychLiczb[licznik] == tablica[liczba]){
                liczbaWystapila = 1;
                licznikWystapienLiczby[licznik]++;
            }
            licznik++;
        }
        if (!liczbaWystapila){
            licznikWystapienLiczby[licznik] = 1;
            tablicaPowtorzonychLiczb[licznik] = tablica[liczba];
        }
    }

    printf("Liczba   Ilosc\n");
    licznik = 0;
    // wyswietlenie liczb tylko z licznikiem > 0
    while (licznik < dlugosc && licznikWystapienLiczby[licznik] > 0){
        printf("%4d %4d\n", tablicaPowtorzonychLiczb[licznik], licznikWystapienLiczby[licznik]);
        licznik++;
    }
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
