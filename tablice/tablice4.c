#include <stdio.h>
#define MAX 10
double najwieksza(double tablica[], int rozmiar){
        double najwieksza = tablica[0];
        int i;

        for (i = 1; i < rozmiar; i++){
            if (najwieksza < tablica[i])
                najwieksza = tablica[i];
        }

    return najwieksza;
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

    printf("Najwieksza liczba z podanych, to %lf", najwieksza(dane, licznik));
    return 0;
}
