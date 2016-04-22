#include <stdio.h>

void sprawdzTablice(int tablica[], int dlugosc){
    int liczba, licznik, licznikRoznych = 0;
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
            }
            licznik++;
        }
        if (!liczbaWystapila){
            licznikWystapienLiczby[licznik] = 1;
            tablicaPowtorzonychLiczb[licznik] = tablica[liczba];
            licznikRoznych++;
        }
    }

    printf("Liczba zawiera %d roznych cyfr:\n", licznikRoznych);
    licznik = 0;
    // wyswietlenie liczb tylko z licznikiem > 0
    while (licznik < dlugosc && licznikWystapienLiczby[licznik] > 0){
        printf("%d ", tablicaPowtorzonychLiczb[licznik]);
        licznik++;
    }
}

int main(){
    int limit, licznik, pom, liczba;

    printf("Podaj liczbe naturalna:\n");
    scanf("%d", &liczba);
    // ustalenie wielkosci tablicy
    pom = liczba;
    for (limit = 0; pom > 0; limit++)
        pom /= 10;

    int dane[limit];

    pom = liczba;
    for (licznik = limit - 1; licznik >= 0; licznik--){
        dane[licznik] = pom % 10;
        pom /= 10;
    }

    sprawdzTablice(dane, limit);
    getchar();
    getchar();
    return 0;
}
