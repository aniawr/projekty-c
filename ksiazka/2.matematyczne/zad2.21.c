#include <stdio.h>
#include <math.h>

double szeregA(double eps){
    double i = 1, suma = 0, wyraz = 1;

    while (wyraz > eps){
        suma += wyraz;
        i++;
        wyraz = 1 / (i * i);
    }
    return suma;
}

double szeregB(double eps){
    double i = 1, suma = 0, wyraz = 1;

    while (wyraz > eps){
        suma += wyraz;
        i++;
        wyraz = (wyraz * (pow(-1, i) / i++));
    }
    return suma;
}

double szeregC(double eps){
    double i = 1, suma = 0, wyraz = 1;

    while (wyraz > eps){
        suma += wyraz;
        i++;
        wyraz = 1 / (i * (i + 1));
    }
    return suma;
}

double szeregD(double eps){
    double i = 1, suma = 0, wyraz = 1;

    while (wyraz > eps){
        suma += wyraz;
        i++;
        wyraz = (wyraz * (pow(-2, i) / i++));
    }
    return suma;
}

int main(){
    double epsilon = 1e-9;

    printf("Suma szeregu A = %lf\n", szeregA(epsilon));
    printf("Suma szeregu B = %lf\n", szeregB(epsilon));
    printf("Suma szeregu C = %lf\n", szeregC(epsilon));
 //   printf("Suma szeregu D = %lf\n", szeregD(epsilon));    do poprawki
    getchar();
    getchar();
    return 0;
}
