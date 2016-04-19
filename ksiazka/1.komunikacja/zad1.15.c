#include <stdio.h>

int main(){
    char znak;
    int cyfry;
    printf("Wprowadz liczbe\n");
    while (znak != '\n') {
        znak = getchar();
        if (znak >= '0' && znak <= '9' || znak == '.' || znak == 'E' || znak == '-')
            putchar(znak);
    }
    return 0;
}
