#include <stdio.h>

double najwieksza(double tablica[], int rozmiar){
        double najwieksza = tablica[0];
        int licznik;

        for (licznik = 1; licznik < rozmiar; licznik++){
            if (najwieksza < tablica[licznik])
                najwieksza = tablica[licznik];
        }
    return najwieksza;
}

double najmniejsza(double tablica[], int rozmiar){
        double najmniejsza = tablica[0];
        int licznik;

        for (licznik = 1; licznik < rozmiar; licznik++){
            if (najmniejsza > tablica[licznik])
                najmniejsza = tablica[licznik];
        }
    return najmniejsza;
}

int main(){
    int ilosc = 0, licznik = 0;

    do{
        printf("Podaj ile bedzie liczb, ale nie mniej niz 0:\n");
        scanf("%d", &ilosc);
    } while(ilosc < 0);

    double dane[ilosc];

    for (licznik; licznik < ilosc; licznik++){
        printf("\nPodaj %d liczbe:\n", licznik + 1);
        scanf("%lf", &dane[licznik]);
    }

    printf("Najwieksza liczba z podanych, to %lf\n", najwieksza(dane, licznik));
    printf("Najmniejsza liczba z podanych, to %lf\n", najmniejsza(dane, licznik));
    getchar();
    getchar();
    return 0;
}
