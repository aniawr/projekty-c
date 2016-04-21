#include <stdio.h>

int ileCyfr(int l){
    int licznik = 0;
    while (l > 0){
        l /= 10;
        licznik++;
    }
    return licznik;
}

int sumaCyfr(int l){
    int suma = 0;
    int cyfra;
    while (l > 0){
        cyfra = l % 10;
        l /= 10;
        suma += cyfra;
    }
    return suma;
}

int najbardziejZnaczaca(int l){
    int pom;
    while (l > 0){
        pom = l;
        l /= 10;
    }
    return pom;
}

int main(){
    int liczba;

    do {
        printf("Podaj liczbe naturalna mniejsza od 32768\n");
        scanf("%d", &liczba);
    } while (liczba >= 32768 || liczba <= 0);
    printf("Liczba %d zawiera %d cyfr\n", liczba, ileCyfr(liczba));

    printf("Suma cyfr liczby %d wynosi %d\n", liczba, sumaCyfr(liczba));

    printf("Najbardziej znaczaca cyfra liczby %d wynosi %d\n", liczba, najbardziejZnaczaca(liczba));

    getchar();
    getchar();
    return 0;
}
