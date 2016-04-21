#include <stdio.h>

void bankomat(int zakres){
    int licznik;
    int pom;

    printf("Do optymalnego uzyskania kwoty %d trzeba:\n", zakres);
    if (zakres >= 100)
        printf("%d * 100zl\n", zakres / 100);

    pom = zakres % 100;
    if (pom >= 50){
        printf("1 * 50zl\n");
        pom -= 50;
    }
    if (pom >= 20){
        for (licznik = 0; pom >= 20; licznik++)
            pom -= 20;
        printf("%d * 20zl\n", licznik);
    }
    if (pom >= 10){
        printf("1 * 10zl\n");
        pom -= 10;
    }
    if (pom >= 5){
        printf("1 * 5zl\n");
        pom -= 5;
    }
    if (pom >= 2){
        for (licznik = 0; pom >= 2; licznik++)
            pom -= 2;
        printf("%d * 2zl\n", licznik);
    }
    if (pom >= 1){
        printf("1 * 1zl\n");
        pom -= 1;
    }
}

int main(){
    int kwota;

    do {
        printf("Podaj liczbe naturalna mniejsza od 32768\n");
        scanf("%d", &kwota);
    } while (kwota >= 32768 || kwota <= 0);

    bankomat(kwota);
    getchar();
    getchar();
    return 0;
}
