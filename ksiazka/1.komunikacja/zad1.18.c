#include <stdio.h>

int main(){
    int i;
    int r;
    putchar(218);
    for (i = 2; i <= 78; i++)
        putchar(196);
    putchar(191);
    putchar('\n');
    for (i = 2; i <= 24; i++){
        putchar(179);
        for (r = 2; r <= 78; r++)
            putchar(' ');
        putchar(179);
        putchar('\n');
    }
    putchar(192);
    for (i = 2; i <= 78; i++)
        putchar(196);
    putchar(217);
    getchar();
    return 0;
}
