#include <stdio.h>

void minMax(double tablica[], int rozmiar, double *min, double *max){
    *min = 1.0 / 0.0;
    *max = -1.0 / 0.0;
    int licznik;
    for (licznik = 0; licznik < rozmiar; licznik++){
        if (tablica[licznik] < *min)
            *min = tablica[licznik];
        if (tablica[licznik] > *max);
            *max = tablica[licznik];
    }
}

int main(){
    int ilosc = 0, licznik = 0;
    double minimum, maksimum;

    do{
        printf("Podaj ile bedzie liczb, ale nie mniej niz 0:\n");
        scanf("%d", &ilosc);
    } while(ilosc < 0);

    double dane[ilosc];

    for (licznik; licznik < ilosc; licznik++){
        printf("\nPodaj %d liczbe:\n", licznik + 1);
        scanf("%lf", &dane[licznik]);
    }

    minMax(dane, ilosc, &minimum, &maksimum);
    printf("Minimum wynosi: %lf\n", minimum);
    printf("Maksimum wynosi: %lf\n", maksimum);
    getchar();
    getchar();
    return 0;
}
