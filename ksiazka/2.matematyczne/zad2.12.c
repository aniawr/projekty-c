#include <stdio.h>

int nwd(int a, int b) {
    int t;

    while(b != 0){
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(){
    int liczba;
    int podzielnik = 3;
    printf("Podaj liczbe naturalna\n");
    scanf("%d", &liczba);

    if (liczba > 0)
        printf("Liczba jest dodatnia\n");
    else
        printf("Liczba jest ujemna lub rowna 0\n");

    if (liczba % 2 == 0)
        printf("Liczba jest parzysta\n");
    else
        printf("Liczba jest nieparzysta\n");

    if (nwd(liczba, podzielnik) == podzielnik)
        printf("Liczba jest podzielna przez %d\n", podzielnik);
    else
        printf("Liczba nie jest podzielna przez %d\n", podzielnik);
    getchar();
    getchar();
    return 0;
}
