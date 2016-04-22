#include <stdio.h>

void dziesietnaNaDwojkowa(int liczba){
    int dlugosc, pom, licznik;

    pom = liczba;
    for (dlugosc = 0; pom > 0; dlugosc++)
        pom /= 2;
    int dwojkowa[dlugosc];

    pom = liczba;
    for (licznik = dlugosc - 1; licznik >= 0; licznik--){
        dwojkowa[licznik] = pom % 2;
        pom /= 2;
    }

    printf("Liczba %d = ", liczba);
    for (licznik = 0; licznik < dlugosc; licznik++)
        printf("%d", dwojkowa[licznik]);

}

int main(){
    int liczba;

    printf("Podaj liczbe naturalna:\n");
    scanf("%d", &liczba);

    dziesietnaNaDwojkowa(liczba);
    getchar();
    getchar();
    return 0;
}
