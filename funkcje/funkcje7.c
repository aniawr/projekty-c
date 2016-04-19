#include <stdio.h>
#include <math.h>

double potega(double a, int n){

    double p = 1;
    double q = a;
    int i = n;
    if (n < 0)
        i *= -1;

    while(i > 0){
        if(i % 2 != 0){
            p *= q;
        }
            q *= q;
            i /= 2;
        }
    if (n < 0){
        return 1 / p;
    }
    return p;
}

int main(){
    int n;
    double a;
    puts("Podaj liczbe i jej potege, oddzielajac spacja:\n");
    scanf("%lf %d", &a, &n);

    printf("Otrzymany wynik: %lf\n", potega(a, n));
    printf("Oczekiwany wynik: %lf\n", pow(a, n));
    return 0;
}
