#include <stdio.h>

int main(){
    int maxLiczb, licznik = 1;

    double zero = 0.0;
    double max = -1 / zero;
    double min = 1 / zero;
    double najwieksza = max, najmniejsza = min, liczba;

    printf("Podaj ile bedzie liczb:\n");
    scanf("%d", &maxLiczb);
    for (licznik; licznik <= maxLiczb; licznik++){
        printf("Podaj %d liczbe:\n", licznik);
        scanf("%lf", &liczba);

        if (liczba <= najmniejsza)
            najmniejsza = liczba;

        if (liczba >= najwieksza)
            najwieksza = liczba;

    }
    printf("Najmniejsza liczba to: %.3lf\n", najmniejsza);
    printf("Najwieksza liczba to: %.3lf\n", najwieksza);

    return 0;
}
