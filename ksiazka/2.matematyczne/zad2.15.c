#include <stdio.h>

// nie wiem czy to o to chodzi w tym zadaniu
// tresc zadania jest dla mnie niezrozumiala
int main(){
    int liczbaSprawdzana = 5, liczbaDodawana, suma = 0, zakres = 10000;

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
    getchar();
    getchar();
    return 0;
}
