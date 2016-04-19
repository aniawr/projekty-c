#include <stdio.h>

int main(){
    int licznik, limit;
    double liczba;
    double suma = 0;
    double sumaKwadratow = 0;

    printf("Podaj ile bedzie liczb do sprawdzenia\n");
    scanf("%d", &limit);

    for (licznik = 1; licznik <= limit; licznik++){
        printf("Podaj %d liczbe: \n", licznik);
        scanf("%lf", &liczba);
        suma += liczba;
        sumaKwadratow += liczba * liczba;
    }
    printf("Suma liczb wynosi %lf\n", suma);
    printf("Srednia arytmetyczna wynosi %lf\n", suma / limit);
    if (suma != 0)
        printf("Suma odwrotnosci wynosi %lf\n", 1 / suma);
    else
        printf("Suma wynosi 0, wiec nie mozna obliczyc odwrotnosci");
    printf("Suma kwadratow wynosi %lf\n", sumaKwadratow);
    getchar();
    getchar();
    return 0;
}
