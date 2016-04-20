#include <stdio.h>

void podzielniki(int liczbaSprawdzana) {
    int liczbaDodawana;
    for (liczbaDodawana = 1; liczbaDodawana <= (liczbaSprawdzana / 2); liczbaDodawana++){

        if (liczbaSprawdzana % liczbaDodawana == 0){
            printf("%d ", liczbaDodawana);
        }
    }
    printf("%d ", liczbaSprawdzana);
}

int main(){
    int liczba;

    printf("Podaj liczbe naturalna\n");
    scanf("%d", &liczba);

    podzielniki(liczba);

    getchar();
    getchar();
    return 0;
}
