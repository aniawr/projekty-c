#include <stdio.h>
#include <string.h>
#define MAX 101

void odKonca(char napis[], int rozmiar){
    int licznik;
    char pom;
    // int rozmiar = strlen(napis);   <= gdy nie pobieramy napisu od uzytkownika i nie znamy dlugosci
    for (licznik = 0; licznik < rozmiar / 2; licznik++){
        pom = napis[licznik];
        napis[licznik] = napis[rozmiar - licznik - 2];
        napis[rozmiar - licznik - 2] = pom;
    }
    for (licznik = 0; licznik < rozmiar; licznik++)
        printf("%c", napis[licznik]);
}

int main(){
    int rozmiar = 0;
    char znak = 0;
    char napis[MAX];
    printf("Podaj jakis tekst, nie dluzszy niz %d znakow:\n", MAX - 1);
    while (znak != '\n'){
		znak = getchar();
        napis[rozmiar] = znak;
        rozmiar++;
	}
	// Alternatywnie:
	// gets(napis);

    odKonca(napis, rozmiar);
    getchar();
    getchar();
    return 0;
}
