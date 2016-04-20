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
    int podzielnik;

    printf("Podaj liczbe naturalna\n");
    scanf("%d", &liczba);
    printf("Podaj podzielnik do sprawdzenia\n");
    scanf("%d", &podzielnik);

    if (nwd(liczba, podzielnik) == podzielnik)
        printf("Liczba jest podzielna przez %d\n", podzielnik);
    else
        printf("Liczba nie jest podzielna przez %d\n", podzielnik);
    getchar();
    getchar();
    return 0;
}
