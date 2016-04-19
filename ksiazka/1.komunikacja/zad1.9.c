#include <stdio.h>

void ktoraWieksza(double i, double k){

    if (i > k){
        printf("Liczba %lf jest wieksza\n", i);
        printf("Liczba %lf jest mniejsza\n", k);
    }
    else{
        printf("Liczba %lf jest wieksza\n", k);
        printf("Liczba %lf jest mniejsza\n", i);
    }
}

int main(){
    double liczba1;
    double liczba2;

    printf("Podaj 1 liczbe: \n");
    scanf("%lf", &liczba1);

    printf("Podaj 2 liczbe: \n");
    scanf("%lf", &liczba2);

    ktoraWieksza(liczba1, liczba2);

    getchar();
    return 0;
}
