#include <stdio.h>
#include <math.h>

double objetoscSzescianu(double a){
    return a * a * a;
}

double objetoscProstopadloscianu(double a, double b, double c){
    return a * b * c;
}

double objetoscStozka(double h, double r){
    return (r * r * M_PI * h) / 3;
}

double poleKuli(double r){
    return (4 * r * r * r * M_PI) / 3;
}

int main(){
    double bokSzescianu;
    double bokProstopadloscianu1, bokProstopadloscianu2, bokProstopadloscianu3;
    double wysokosc;
    double promien;

    printf("Podaj bok szescianu\n");
    scanf("%lf", &bokSzescianu);
    printf("Objetosc kwadratu wynosi %lf\n", objetoscSzescianu(bokSzescianu));

    printf("Podaj 3 boki prostopadloscianu oddzielajac je spacja\n");
    scanf("%lf %lf %lf", &bokProstopadloscianu1, &bokProstopadloscianu2, &bokProstopadloscianu3);
    printf("Objetosc prostopadloscianu wynosi %lf\n", objetoscProstopadloscianu(bokProstopadloscianu1, bokProstopadloscianu2, bokProstopadloscianu3));

    printf("Podaj wysokosc i promien stozka oddzielajac je spacja\n");
    scanf("%lf %lf", &wysokosc, &promien);
    printf("Objetosc stozka wynosi %lf\n", objetoscStozka(wysokosc, promien));

    printf("Podaj promien kuli\n");
    scanf("%lf", &promien);
    printf("Objetosc kuli wynosi %lf\n", poleKuli(promien));
    getchar();
    getchar();
    return 0;
}
