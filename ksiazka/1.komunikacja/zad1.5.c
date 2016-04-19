#include <stdio.h>

void sumaRoznicaIloczyn(double i, double k){
    printf("Suma liczb: %3lf, roznica: %3lf, iloczyn: %6lf\n", i + k, i - k, i * k);
}

double iloraz(double i, double k){
    return i / k;
}

void odwrotnosc(double i, double k){
   printf("Odwrotnosc liczb to %lf i %lf\n", 1 / i, 1 / k);
}

int main(){
    double liczba1;
    double liczba2;

    printf("Podaj 1 liczbe: \n");
    scanf("%lf", &liczba1);

    printf("Podaj 2 liczbe: \n");
    scanf("%lf", &liczba2);

    sumaRoznicaIloczyn(liczba1, liczba2);

    if (liczba2 != 0)
        printf("Iloraz %3lf\n", iloraz(liczba1, liczba2));
    else
        printf("Nie mozna wykonac dzielenia! Druga liczba rowna sie zeru.\n");

    if (liczba1 != 0 && liczba2 != 0)
        odwrotnosc(liczba1, liczba2);
    else
        printf("Jedna z liczb to 0, wiec nie mozna wykonac odwrotnosci.\n");
    getchar();

    return 0;
}
