#include <stdio.h>


void wyswietlLiczbyPomiedzy(int i, int k){
    int pom;

    if (i > k){
        pom = i;
        i = k;
        k = pom;
    }
    printf("Liczby pomiedzy %d i %d to:\n", i, k);
    for (i += 1; i < k; i++)
        printf("%d ", i);
}

int main(){
    int liczba1;
    int liczba2;

    printf("Podaj 1 liczbe: \n");
    scanf("%d", &liczba1);

    printf("Podaj 2 liczbe: \n");
    scanf("%d", &liczba2);

    wyswietlLiczbyPomiedzy(liczba1, liczba2);

    return 0;
}
