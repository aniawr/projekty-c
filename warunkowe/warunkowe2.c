#include <stdio.h>

int main(){
    int liczbaSprawdzana = 5, liczbaDodawana, suma = 0, czyDoskonala;

    while (liczbaSprawdzana <= 10000){
        for (liczbaDodawana = 1; liczbaDodawana <= (liczbaSprawdzana / 2); liczbaDodawana++){

            if (liczbaSprawdzana % liczbaDodawana == 0){
                suma += liczbaDodawana;
            }
        }

       // if (liczbaSprawdzana % suma == 0 && liczbaSprawdzana / suma == 1)
        if (suma == liczbaSprawdzana)
            printf("Liczba %d jest doskonala\n", liczbaSprawdzana);

        liczbaSprawdzana++;
        suma = 0;
    }
    return 0;
}
