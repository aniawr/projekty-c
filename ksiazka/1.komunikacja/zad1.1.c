#include<stdio.h>
#include<windows.h>
#include<conio.h>


int main(){
    // zad. 1.1a
    puts("To ja, Tw�j IBM");

    // zad. 1.1b
    // gotoxy() nie jest wspierane przez nowe kompilatory!
    gotoxy(32, 12);
    puts("To ja, Tw�j IBM");

    getchar();

    return 0;
}
