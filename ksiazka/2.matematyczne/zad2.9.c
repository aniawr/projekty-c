#include <stdio.h>

int main(){
    int liczba1, liczba2, wynik, pom, reszta;

    do {
        printf("Podaj dwie liczby calkowite. Pierwsza nie moze byc mniejsza od drugiej.\n");
        printf("Podane liczby oddziel spacja\n");
        scanf("%d %d", &liczba1, &liczba2);
    } while (liczba1 < liczba2);
    pom = liczba1;
    for (wynik = 0; pom > 0; wynik += liczba2 ){
        pom--;
    }
    printf("%d * %d = %d\n", liczba1, liczba2, wynik);

    pom = liczba1;
    for (wynik = 0; pom >= 0; wynik++){
        pom -= liczba2;
    }
    reszta = pom + liczba2;
    printf("%d / %d = %d.%d\n", liczba1, liczba2, wynik - 1, reszta);
    getchar();
    getchar();
    return 0;
}
