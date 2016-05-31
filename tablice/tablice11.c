#include <stdio.h>

void wyswietlMacierzDouble(int wierszy, int kolumn, double m[wierszy][kolumn]){
    int wier, kol;
    double pom;

    for (wier = 0; wier < wierszy; wier++){
        printf("| ");
        for (kol = 0; kol < kolumn; kol++){
            printf("%lf ", m[wier][kol]);
        }
        printf("|\n");
    }
    printf("\n\n");

    for (wier = 0; wier < wierszy; wier++){
        for (kol = wier + 1; kol < kolumn; kol++){
            pom = m[wier][kol];
            m[wier][kol] = m[kol][wier];
            m[kol][wier] = pom;
        }
    }

    for (wier = 0; wier < wierszy; wier++){
        printf("| ");
        for (kol = 0; kol < kolumn; kol++){
            printf("%lf ", m[wier][kol]);
        }
        printf("|\n");
    }
}

int main(){
    int ilosc = 4;
    double dane[4][4] = { {1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16} };

    wyswietlMacierzDouble(ilosc, ilosc, dane);

    getchar();
    getchar();
    return 0;
}
