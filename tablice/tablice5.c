#include <stdio.h>
#define MAX 10
double srednia(double tablica[], int rozmiar){
        int i;
        double srednia = tablica[0];

        for (i = 1; i < rozmiar; i++)
                srednia += tablica[i];

    return srednia / rozmiar;
}

int main(){
    int ilosc = 0, licznik = 0;

    do{
        printf("Podaj ile bedzie liczb, ale nie mniej niz 0:\n");
        scanf("%d", &ilosc);
    } while(ilosc < 0);

    double dane[ilosc];

    for (licznik; licznik < ilosc; licznik++){
        printf("\nPodaj %d liczbe: ", licznik + 1);
        scanf("%lf", &dane[licznik]);
    }

    printf("Srednia arytmetyczna z podanych liczb, to %lf", srednia(dane, licznik));
    return 0;
}
