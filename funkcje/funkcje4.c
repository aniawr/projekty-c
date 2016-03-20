#include <stdio.h>
#include <math.h>

double pierwiastek(int liczba){
    double poprzedni;
    double nastepny = 0;
    for (poprzedni = liczba / 2; poprzedni < (poprzedni - (liczba / poprzedni)) ; nastepny = poprzedni / 2){
        nastepny = (poprzedni + (liczba / poprzedni)) / 2;
        poprzedni = nastepny;
    }
    return nastepny;
}

int main(){
    int a;

    puts("Podaj liczbe do pierwiastka: \n");
    scanf("%d", &a);

    printf("Otrzymany wynik pierwiastka z %d wynosi %lf\n", a, pierwiastek(a));
    printf("Oczekiwany wynik %lf\n", sqrt(a));
    return 0;
}
