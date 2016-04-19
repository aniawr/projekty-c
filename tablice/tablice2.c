#include <stdio.h>

int czywTablicy(int tablica[], int n, int liczba){
    int i;
    int dlugosc = n - 1;
    int jestwTablicy = 0;

    for (i = 0; i <= dlugosc; i++){
        if (tablica[i] == liczba)
            return jestwTablicy = 1;
    }
    return jestwTablicy;
}

int main(){
    int dane[] = {-44, 5, 67, -2, 0, 33, 77};
    int liczba;
    int jest;

    puts("Podaj liczbe do sprawdzenia w tablicy:\n");
    scanf("%d", &liczba);

    jest = czywTablicy(dane, sizeof(dane) / sizeof(dane[0]), liczba);

    if (jest)
        printf("Liczba %d jest w tej tablicy", liczba);
    else
        printf("Liczby %d nie ma w tej tablicy", liczba);
}
