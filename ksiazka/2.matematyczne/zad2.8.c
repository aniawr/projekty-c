#include <stdio.h>

int main(){
    int liczba1, liczba2, wynik;

    do {
        printf("Podaj dwie liczby calkowite. Pierwsza nie moze byc mniejsza od drugiej.\n");
        printf("Podane liczby oddziel spacja\n");
        scanf("%d %d", &liczba1, &liczba2);
    } while (liczba1 < liczba2);

    for (wynik = 0; wynik + liczba2 != liczba1; wynik++){
        ;
    }

    printf("%d - %d = %d", liczba1, liczba2, wynik);
    getchar();
    getchar();
    return 0;
}
