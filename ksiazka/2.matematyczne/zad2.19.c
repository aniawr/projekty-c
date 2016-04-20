#include <stdio.h>

int czy_pierwsza(int liczba);

int czy_pierwsza(int liczba){
    int i;

    if (liczba < 1)
        return 0;
    for(i = 2; i * i <= liczba; i++){
        if(liczba % i==0)
            return 0;
    }
    if (liczba == 1)
        return 1;
    return 1;
}

void podzielniki(int liczbaSprawdzana) {
    int liczbaDodawana;
    for (liczbaDodawana = 1; liczbaDodawana <= (liczbaSprawdzana / 2); liczbaDodawana++){

        if (liczbaSprawdzana % liczbaDodawana == 0){
            if (czy_pierwsza(liczbaDodawana))
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
