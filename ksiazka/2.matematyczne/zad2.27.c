#include <stdio.h>

void czyDoskonala(int zakres){
    int liczbaSprawdzana = 5, liczbaDodawana, suma = 0;

    while (liczbaSprawdzana <= zakres){
        for (liczbaDodawana = 1; liczbaDodawana <= (liczbaSprawdzana / 2); liczbaDodawana++){

            if (liczbaSprawdzana % liczbaDodawana == 0){
                suma += liczbaDodawana;
            }
        }

        if (suma == liczbaSprawdzana)
            printf("Liczba %d jest doskonala\n", liczbaSprawdzana);

        liczbaSprawdzana++;
        suma = 0;
    }
}

int main(){
    int zakres;

    do {
        printf("Podaj liczbe naturalna mniejsza od 32768\n");
        scanf("%d", &zakres);
    } while (zakres >= 32768 || zakres <= 0);

    czyDoskonala(zakres);
    getchar();
    getchar();
    return 0;
}
