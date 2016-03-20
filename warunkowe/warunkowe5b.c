#include <stdio.h>

int main(){
    int dzien;
    char *dzienWynik;// gwiazdka to wskaznik do pierwszej litery napisu

    printf("Podaj dzien tygodnia:\n");
    scanf("%d", &dzien);

    switch (dzien){
        case 1 : dzienWynik = "Poniedzialek"; break;
        case 2 : dzienWynik = "Wtorek"; break;
        case 3 : dzienWynik = "Sroda"; break;
        case 4 : dzienWynik = "Czwartek"; break;
        case 5 : dzienWynik = "Piatek"; break;
        case 6 : dzienWynik = "Sobota"; break;
        case 7 : dzienWynik = "Niedziela"; break;
        default : puts("Jakis blad");
            return 1;
            break;
    }
    printf("%d to %s", dzien, dzienWynik);
    return 0;
}
