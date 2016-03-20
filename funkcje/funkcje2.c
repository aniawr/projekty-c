#include <stdio.h>
#include <math.h>

int wartBezwzgledna(int liczba){
    if (liczba < 0)
        //return abs(liczba);
        return -liczba;
    else
        return liczba;
}

int main(){
    int l;
    printf("Podaj liczbe\n");
    scanf("%d", &l);

    printf("Podana liczba %d. Wartosc bezwzgledna wynosi: %d\n", l, wartBezwzgledna(l));

    return 0;
}
