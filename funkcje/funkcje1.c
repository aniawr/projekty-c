#include <stdio.h>
#include <math.h>

double poleKuli(double promien){
    double pole = 4 * M_PI * promien * promien;
    return pole;
}

int main(){
    double r;
    puts("Podaj promien kuli:\n");
    scanf("%lf", &r);

    printf("Promien: %.3lf, pole kuli: %.3lf", r, poleKuli(r));
    return 0;
}

