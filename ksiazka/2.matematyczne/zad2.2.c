#include <stdio.h>
#include <math.h>

double poleTrojkata(double a, double b, double c){
    double pom = (a + b + c) / 2;
    double pole = sqrt(pom * (pom - a) * (pom - b) * (pom - c));
    return pole;
}

double poleKwadratu(double a){
    return a * a;
}

double poleProstokata(double a, double b){
    return a * b;
}

double poleKola(double r){
    return r * r * M_PI;
}

int main(){
    double bokTrojkata1, bokTrojkata2, bokTrojkata3;
    double bokKwadratu;
    double bokProstokata1, bokProstokata2;
    double promien;

    printf("Podaj boki trojkata oddzielajac je spacja\n");
    scanf("%lf %lf %lf", &bokTrojkata1, &bokTrojkata2, &bokTrojkata3);
    printf("Pole trojkata wynosi %lf\n", poleTrojkata(bokTrojkata1, bokTrojkata2, bokTrojkata3));

    printf("Podaj bok kwadratu\n");
    scanf("%lf", &bokKwadratu);
    printf("Pole kwadratu wynosi %lf\n", poleKwadratu(bokKwadratu));

    printf("Podaj boki prostokata oddzielajac je spacja\n");
    scanf("%lf %lf", &bokProstokata1, &bokProstokata2);
    printf("Pole prostokata wynosi %lf\n", poleProstokata(bokProstokata1, bokProstokata2));

    printf("Podaj promien kola\n");
    scanf("%lf", &promien);
    printf("Pole kola wynosi %lf\n", poleKola(promien));
    getchar();
    getchar();
    return 0;
}
