#include <stdio.h>

void wypiszTablice(int dlugoscWierszy, int dlugoscKolumn, double tablica[dlugoscWierszy][dlugoscKolumn]){
    int licznikWierszy, licznikKolumn;

    printf("Elementy macierzy:\n");
    for (licznikWierszy = 1; licznikWierszy < dlugoscWierszy; licznikWierszy++){
        for (licznikKolumn = 1; licznikKolumn < dlugoscKolumn; licznikKolumn++){
            printf("%.2lf ", tablica[licznikWierszy][licznikKolumn]);
        }
        printf("\n");
    }
}

int main(){
    int maxWiersze = 15;
    int maxKolumny = maxWiersze;
    int komorkaWiersze, komorkaKolumny;

    double dane[maxWiersze][maxKolumny];

    for (komorkaWiersze = 1; komorkaWiersze < maxWiersze; komorkaWiersze++){
        for (komorkaKolumny = 1; komorkaKolumny < maxWiersze; komorkaKolumny++){
            dane[komorkaWiersze][komorkaKolumny] = ( 1.0 / (komorkaWiersze + komorkaKolumny));
        }
    }

    wypiszTablice(maxWiersze, maxKolumny, dane);
    getchar();
    getchar();
    return 0;
}
