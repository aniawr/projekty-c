#include <stdio.h>
#include <math.h>

int czySumaSzescianow(int l){
    int maxSzescian, szescian1, szescian2, jest = 0;
    maxSzescian = round(sqrt(l));
    for (szescian1 = 1; szescian1 <= maxSzescian; szescian1++){
        for (szescian2 = 1; szescian2 <= szescian1; szescian2++){
            if (l == (szescian1 * szescian1 * szescian1) + (szescian2 * szescian2 * szescian2)){
                printf("%d = %d^3 + %d^3\n", l, szescian1, szescian2);
                jest = 1;
            }
        }
    }
    return jest;
}

int main(){
    int liczba;

    do {
        printf("Podaj liczbe naturalna mniejsza od 32768\n");
        scanf("%d", &liczba);
    } while (liczba >= 32768 || liczba <= 0);

    if (!czySumaSzescianow(liczba))
        printf("Nie znaleziono sumy kwadratow dla liczby %d\n", liczba);

    getchar();
    getchar();
    return 0;
}
