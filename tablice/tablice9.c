#include <stdio.h>

int ostatniaPodzielna7(int tablica[], int rozmiar){
    int podzielna = 0;
    int licznik;

    for (licznik = rozmiar - 1; licznik >= 0; licznik--){
        if (tablica[licznik] % 7 == 0){
            podzielna = tablica[licznik];
            break;
        }
    }
    return podzielna;
}

int main(){
    int ilosc = 0, licznik = 0, liczba;

    do{
        printf("Podaj ile bedzie liczb, ale nie mniej niz 0:\n");
        scanf("%d", &ilosc);
    } while(ilosc < 0);

    int dane[ilosc];

    for (licznik; licznik < ilosc; licznik++){
        do {
            printf("\nPodaj %d liczbe:\n", licznik + 1);
            scanf("%d", &dane[licznik]);
        } while (dane[licznik] <= 0);
    }
    liczba = ostatniaPodzielna7(dane, licznik);
    if (liczba)
        printf("Ostatnia liczba podzielna przez 7, to %d\n", liczba);
    else
        printf("Nie znaleziono liczby podzielnej przez 7\n");
    getchar();
    getchar();
    return 0;
}
