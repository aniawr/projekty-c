#include <stdio.h>

double iloczynSkalarny(double wektor1[], int rozmiar, double wektor2[]){
    int iloczynSk = 0;
    int licznik;
    for (licznik = 0; licznik < rozmiar; licznik++)
        iloczynSk += wektor1[licznik] * wektor2[licznik];
    return iloczynSk;
}

int main(){
    double wektor1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    double wektor2[] = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9};
    int dlugoscTablicy1 = sizeof(wektor1) / sizeof(wektor1[0]) - 1;
    int dlugoscTablicy2 = sizeof(wektor2) / sizeof(wektor2[0]) - 1;
    double wynik = 0;
    if (dlugoscTablicy1 == dlugoscTablicy2)
        wynik = iloczynSkalarny(wektor1, dlugoscTablicy1, wektor2);
    else
        puts("Wektory nie maja tyle samo wymiarow");
    printf("Otrzymano wynik: %lf", wynik);
    getchar();
    getchar();
    return 0;
}
