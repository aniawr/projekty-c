#include <stdio.h>

void drukujNaturalne(int k){
    printf("%2d \n", k);
}

void drukujKwadraty(int k){
    printf("%2d %3d\n", k, k * k);
}

void drukujSzesciany(int k){
    printf("%2d %4d\n", k, k * k * k);
}

int main(){
    int i;

    // zad 1.2a
    for (i = 1; i <= 10; i++)
        drukujNaturalne(i);
    printf("\n ");
    getchar();

    // zad 1.2b
    for (i = 1; i <= 10; i++)
        drukujKwadraty(i);
    printf("\n ");
    getchar();

    // zad 1.2a
    for (i = 1; i <= 10; i++)
        drukujSzesciany(i);
    printf("\n ");
    getchar();

    return 0;
}
