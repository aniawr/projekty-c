#include <stdio.h>
#include <ctype.h>
#define MAX 101

void wielkieLitery(char tekst[]){
    int i;

    for (i = 0; i < MAX && tekst[i] != '\0'; i++)
        printf("%c, ", toupper(tekst[i]));
}

int main(){
    char tekst[MAX];

    printf("Podaj jakis tekst, nie dluzszy niz %d znakow:\n", MAX - 1);
    fgets(tekst, MAX, stdin);

    wielkieLitery(tekst);

    return 0;
}
