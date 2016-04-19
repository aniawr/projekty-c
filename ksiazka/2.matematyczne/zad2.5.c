#include <stdio.h>

double ktoraNajwieksza(double i, double najw){
    if (i > najw)
       najw = i;

    return najw;
}

double ktoraNajmniejsza(double i, double najm){
    if (i < najm)
       najm = i;

    return najm;
}

int main(){
    int licznik, limit;
    double liczba;
    double najwieksza = -1 / 0.0;
    double najmniejsza = 1 / 0.0;

    printf("Podaj ile bedzie liczb do sprawdzenia\n");
    scanf("%d", &limit);

    for (licznik = 1; licznik <= limit; licznik++){
        printf("Podaj %d liczbe: \n", licznik);
        scanf("%lf", &liczba);
        najwieksza = ktoraNajwieksza(liczba, najwieksza);
        najmniejsza = ktoraNajmniejsza(liczba, najmniejsza);
    }
    printf("Najwieksza liczba to %lf\n", najwieksza);
    printf("Najmniejsza liczba to %lf\n", najmniejsza);
    getchar();
    getchar();
    return 0;
}
