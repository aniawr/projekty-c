#include <stdio.h>

int czyLitera(char z){
    if ((z >= 'A' && z <= 'Z') || (z >= 'a' && z <= 'z'))
        return 1;
    else
        return 0;
}

int main(){
    char znak;

    printf("Podaj jakis znak\n");
    scanf("%s", &znak);

    if (czyLitera(znak))
        printf("Podano litere\n");
    else
        printf("Podano inny znak niz litera\n");

    printf("Nastepny znak to %c \n", znak + 1);

    printf("Kod ASCII podanego znaku to %d, a hex to %x", znak, znak);

    getchar();

    return 0;
}
