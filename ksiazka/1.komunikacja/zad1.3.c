#include <stdio.h>

void szachownica(int ilosc, int szerokosc){
    int i;
    int sz;
    int p = 0;

    for (i = 0; i < ilosc; i++){

        if (i > 0 && i % 8 == 0){
            printf("\n");
            p++;
        }
        if (p % 2 == 0)
            printf("* ");
        else
            printf(" *");
    }
}

int main(){

    int ilosc = 64;
    int szerokosc = 8;

    szachownica(ilosc, szerokosc);
    getchar();

    return 0;
}
