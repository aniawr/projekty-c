#include <stdio.h>

int czy_pierwsza(int liczba){
    int i;
    if (liczba <= 1)
        return 0;
    for(i = 2; i * i <= liczba; i++){
        if(liczba % i==0)
            return 0;
    }
    return 1;
}

int main(){
    int poczatek, koniec, pom;

    printf("Podaj 2 liczby naturalne przedzialu szukania liczb pierwszych. Oddziel je spacja\n");
    scanf("%d %d", &poczatek, &koniec);

    if (poczatek > koniec){
        pom = poczatek;
        poczatek = koniec;
        koniec = pom;
    }
    printf("Otrzymano liczby:\n");
    for (poczatek; poczatek <= koniec; poczatek++){
        if (czy_pierwsza(poczatek))
            printf("%d ", poczatek);
    }

    getchar();
    getchar();
    return 0;
}
