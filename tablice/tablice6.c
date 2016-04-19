#include <stdio.h>

void odwroconyNapis(char tekst[], int rozmiar){
    int i;

    for (i = rozmiar - 1; i >= 0; i--)
        putchar(tekst[i]);
}

int main(){
    char tekst[] = "Tablice to podstawa programowania";

    odwroconyNapis(tekst, sizeof(tekst) / sizeof(tekst[0]) - 1);

    return 0;
}
