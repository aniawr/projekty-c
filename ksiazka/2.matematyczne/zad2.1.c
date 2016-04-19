#include <stdio.h>
#include <math.h>

double obwodTrojkata(double a){
    return 3 * a;
}

double obwodKwadratu(double a){
    return 4 * a;
}

double obwodProstokata(double a, double b){
    return (2 * a) + (2 * b);
}

double obwodKola(double r){
    return 2 * r * M_PI;
}

int main(){
    double bokTrojkata;
    double bokKwadratu;
    double bokProstokata1;
    double bokProstokata2;
    double promien;

    printf("Podaj bok trojkata rownoramiennego\n");
    scanf("%lf", &bokTrojkata);
    printf("Obwod trojkata wynosi %lf\n", obwodTrojkata(bokTrojkata));

    printf("Podaj bok kwadratu\n");
    scanf("%lf", &bokKwadratu);
    printf("Obwod kwadratu wynosi %lf\n", obwodKwadratu(bokKwadratu));

    printf("Podaj pierwszy bok prostokata\n");
    scanf("%lf", &bokProstokata1);
    printf("Podaj drugi bok prostokata\n");
    scanf("%lf", &bokProstokata2);
    printf("Obwod prostokata wynosi %lf\n", obwodProstokata(bokProstokata1, bokProstokata2));

    printf("Podaj promien kola\n");
    scanf("%lf", &promien);
    printf("Obwod kola wynosi %lf\n", obwodKola(promien));
    getchar();
    getchar();
    return 0;
}
