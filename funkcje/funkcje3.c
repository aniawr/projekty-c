#include <stdio.h>

int potegaLiczby(int wykladnik, int potega){
    int wynik = 1, licznik;
    if (potega > 0){
        for (licznik = 1; licznik <= potega; licznik++){
            wynik = wynik * wykladnik;
        }
    }
    return wynik;
}

int main(){
    int a, n;

    puts("Podaj liczbe i jej potege, oddzielajac spacja:\n");
    scanf("%d %d", &a, &n);

    printf("Otrzymany wynik: %d\n", potegaLiczby(a, n));
    printf("Oczekiwany wynik: %.lf\n", pow(a, n));
    return 0;
}
