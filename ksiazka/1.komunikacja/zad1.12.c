#include <stdio.h>

int main(){
    char znak;

    for (znak = 'A'; znak <= 'Z'; znak++)
        printf("%c ", znak);
    printf("\n");
    for (znak = 'a'; znak <= 'z'; znak++)
        printf("%c ", znak);
    getchar();

    return 0;
}
