#include <stdio.h>
#include <math.h>

int potega(int a, int n){

    int p = 1;
    int q = a;
    int i = n;

    while(i > 0){
        if(i % 2 != 0){
            p *= q;
        }
            q *= q;
            i /= 2;
        }

    return p;
}

int main(){
    int a, n;

    puts("Podaj liczbe i jej potege, oddzielajac spacja:\n");
    scanf("%d %d", &a, &n);

    printf("Otrzymany wynik: %d\n", potega(a, n));
    printf("Oczekiwany wynik: %lf\n", pow(a, n));
    return 0;
}
