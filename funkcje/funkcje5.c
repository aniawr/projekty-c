#include <stdio.h>
#include <math.h>

double eksponent(double x){
    double suma = 1;
    double epsilon = 1e-8;
    double wyraz = 1;
    int n = 1;
    do {
        wyraz = (wyraz * (x / n++));
        suma += wyraz;
    }
    while(fabs(wyraz) > epsilon);

    return suma;
}

int main(){
    double a;

    for (a = -40; a < 40; a += 10){

        printf("Otrzymany wynik z e do %lf wynosi: %lg\n", a, eksponent(a));
        printf("Oczekiwany wynik: %lg\n", exp(a));

        printf("Blad wzgledny wynosi: %le\n\n", (fabs(eksponent(a) - exp(a)) / exp(a)));

    }
    return 0;
}
