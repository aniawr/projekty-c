#include <stdio.h>

int ileSetek(int a) {
    return a /= 100;
}

int main(){
    int liczba;
    do {
    printf("Podaj liczbe naturalna wieksza od 99\n");
    scanf("%d", &liczba);
    } while (liczba <= 99);

    printf("Liczba zawiera %d setek\n", ileSetek(liczba));
    getchar();
    getchar();
    return 0;
}
