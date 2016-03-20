#include <stdio.h>

int main(){
    int dzien;

    printf("Podaj dzien tygodnia:\n");
    scanf("%d", &dzien);

    switch (dzien){
        case 1 : puts("Poniedzialek"); break;
        case 2 : puts("Wtorek"); break;
        case 3 : puts("Sroda"); break;
        case 4 : puts("Czwartek"); break;
        case 5 : puts("Piatek"); break;
        case 6 : puts("Sobota"); break;
        case 7 : puts("Niedziela"); break;
        default : puts("Jakis blad");
            return 1;
            break;
    }

    return 0;
}
