#include <stdio.h>

double obliczDroge(double v, double t){
    return v * t;
}

int main(){
    double predkosc, czas;

    printf("Podaj predkosc w [m/s]\n");
    scanf("%lf", &predkosc);
    printf("Podaj czas w [s]\n");
    scanf("%lf", &czas);
    printf("Pokonana droga wynosi %lf [m]\n", obliczDroge(predkosc, czas));

    getchar();
    getchar();
    return 0;
}
