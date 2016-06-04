#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double miejsceZerowe(double (*funkcja)(double), double a, double b, double epsilon){
    double ya, yb, x, y;
    if (a >= b){
        printf("Nieprawidlowe granice przedzialu!\n");
        return NAN;
    } else {
        ya = funkcja(a);
        yb = funkcja(b);
        if (ya * yb >= 0){
            printf("Brak miejsca zerowego!\n");
            return NAN;
        } else {
            do {
                x = (a + b) / 2;
                y = funkcja(x);
                //printf("x = %lf\n", x);
                if (y == 0){
                    break;
                } else {
                    if (ya * y < 0){
                        b = x;
                        yb = y;
                    } else {
                        a = x;
                        ya = y;
                    }
                }
            } while (fabs(b - a) > epsilon && nextafter(a, b) < b);
            return x;
        }
    }
}

double funkcja1(double x){
    double f_x = (-2 * x) + 5;
    return f_x;
}

double funkcja2(double x){
    double f_x = (2 * x * x) - 3;
    return f_x;
}

double funkcja3(double x){
    double f_x = (2 * x * x * x) - 30;
    return f_x;
}

double sinCos(double x){
    return sin(x) - cos(x);
}

int main(){
    double x0, x4, (*funkcja)(double);
    int wybor = -1;

    puts("1. -2x + 5");
    puts("2. 2x^2 -3");
    puts("3. 2x^3 -30");
    puts("Ktora funkcje chcesz wyswietlic?\n");
    scanf("%d", &wybor);

    if (wybor == 1){
        funkcja = funkcja1;
    } else if (wybor == 2) {
        funkcja = funkcja2;
    } else if (wybor == 3) {
        funkcja = funkcja3;
    }

    //switch(wybor){
    //  case 1: funkcja = funkcja1; break;
    //  case 2: funkcja = funkcja2; break;
    //  case 3: funkcja = funkcja3; break;
    //  default: puts("Bledny numer!"); exit(1);
    //}
    x0 = miejsceZerowe(funkcja, 1, 5, 1e-19);
    printf("Miejsce zerowe funkcji '2x^3 -30' w przedziale od 1 do 5 wynosi: %lf\n", x0);

    x4 = miejsceZerowe(sinCos, 0, 3, 1e-19);
    printf("Miejsce przeciecia sin(x) i cos(x) w przedziale od 0 do 3 wynosi: %lf", x4);
    return 0;
}
