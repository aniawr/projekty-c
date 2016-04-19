#include <stdio.h>
#include <math.h>

double pierwiastek(double liczba){
    double x = 1, epsilon = 1e-9;
    do {
        x = 0.5 * (x + (liczba / x));
    }
    while(fabs(x - (liczba / x)) > epsilon * x);

    return x;
}

int main(){
    double a;

    for (a = 3e-5; a < 1e7; a *= 10){

        printf("Otrzymany wynik pierwiastka z %lf wynosi %lf\n", a, pierwiastek(a));
        printf("Oczekiwany wynik %lf\n", sqrt(a));

        printf("Blad wzgledny wynosi %le %%\n\n", (fabs(pierwiastek(a) - sqrt(a)) / sqrt(a) * 100));

    }
    return 0;
}
