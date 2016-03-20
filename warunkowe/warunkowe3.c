#include <stdio.h>

int main(){

    int a, b, c, licznik = 0, max = 100, maxLicznik = 20;

    for (a = 1; a <= max; a++){
        for (b = a + 1; b <= max; b++){
            for (c = b + 1; c <= max; c++){
                if (a * a + b * b == c * c &&  licznik <= maxLicznik){
                    printf("Trojki pitagorejskie: a = %d. b = %d. c = %d\n", a, b, c);
                    licznik++;
                }
            }
        }
    }

    return 0;
}
