#include <stdio.h>

void rysujRamke(int w, int s){
    int i;
    int r;

    putchar(201);
    for (i = 2; i <= s - 2; i++)
        putchar(205);
    putchar(187);
    putchar('\n');

    for (i = 2; i <= w - 1; i++){
        putchar(186);
        for (r = 2; r <= s - 2; r++)
            putchar(' ');
        putchar(186);
        putchar('\n');
    }

    putchar(200);
    for (i = 2; i <= s - 2; i++)
        putchar(205);
    putchar(188);
}

int main(){
    int wys = 0;
    int szer = 0;

    do {
        printf("Podaj szerokosc ramki, maksymalnie 80\n");
        scanf("%d", &szer);
    } while (szer < 1 && szer > 80);
    do {
        printf("Podaj wysokosc ramki, maksymalnie 25\n");
        scanf("%d", &wys);
    } while (wys < 1 && wys > 25);
    system("cls");

    rysujRamke(wys, szer);
    getchar();
    getchar();
    return 0;
}
