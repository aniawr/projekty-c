#include <stdio.h>

void takCzyNie(char z){
    if (z == 't')
        printf("tak");
    if (z == 'n')
        printf("nie");
}

int main(){
    char znak;
    while (znak != 't' && znak != 'T' && znak != 'n' && znak != 'N') {
        printf("Wcisnij 'T' lub 'N'\n");
        scanf("%s", &znak);
    }

    takCzyNie(znak);

    getchar();
    return 0;
}
