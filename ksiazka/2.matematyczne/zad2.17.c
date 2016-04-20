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
    int n;

    printf("Podaj liczbe naturalna\n");
    scanf("%d", &liczba);
    printf("Podaj podzielnik do sprawdzenia\n");
    scanf("%d", &podzielnik);

    n = nwd(liczba, podzielnik);
    printf("Najwiekszy wspolny dzielnik tych liczb wynosi %d\n", n);
    printf("Najmniejsza wspolna wielokrotnosc tych liczb wynosi %d\n", (liczba * podzielnik) / n);

    getchar();
    getchar();
    return 0;
}
