#include <stdio.h>

void czyDodatnia(double i){
    if (i > 0)
        printf("%lf dodatnia\n", i);
    else if (i < 0)
        printf("%lf ujemna\n", i);
    else
        printf("%lf zero\n", i);
}

int main(){
    double liczba;
    int ilosc = 10;
    int licznik;
    for (licznik = 1; licznik <= 10; licznik++){
        printf("Podaj %d liczbe: \n", licznik);
        scanf("%lf", &liczba);

        czyDodatnia(liczba);
    }

    getchar();

    return 0;
}
