#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STUDENTOW 15
// iftia9.univ.gda.pl/~pg/Programowanie.html

enum oceny { ndst = 2, dst, db, bdb};

struct student {
    char imie[12];
    char nazwisko[16];
    enum oceny ocena;
};

void wyswietlWszyscyStudenci(int iloscStudentow, struct student Studenci[]){
    int k;
    for (k = 0; k < iloscStudentow; k++){
        printf("%s %s %d\n", Studenci[k].imie, Studenci[k].nazwisko, Studenci[k].ocena);
    }
}

void zapisz(const char * const nazwaPliku, FILE *plik, int iloscStudentow, struct student Studenci[]){
    int k;
    if ((plik = fopen(nazwaPliku, "w")) == NULL){
        fprintf(stderr, "Nie moge otworzyc pliku %s\n", nazwaPliku);
        exit(2);
    }

    for (k = 0; k < iloscStudentow; k++){
        fprintf(plik, "%s %s %d\n", Studenci[k].imie, Studenci[k].nazwisko, Studenci[k].ocena);
    }

    if(fclose(plik) != 0){
        fprintf(stderr, "Nie moge zamknac pliku %s\n", nazwaPliku);
        exit(3);
    } else
        puts("Zapis pliku przebiegl pomyslnie.");
}

void dodajStudenta(int iloscStudentow, struct student Studenci[]){
    printf("Podaj imie: \n");
    scanf("%s", Studenci[iloscStudentow].imie);
    Studenci[iloscStudentow].imie[11] = '\0'; // poprawne zakonczenie napisu
    printf("Podaj nazwisko: \n");
    scanf("%s", Studenci[iloscStudentow].nazwisko);
    Studenci[iloscStudentow].nazwisko[15] = '\0';
    printf("Podaj ocene: \n");
    scanf("%d", &Studenci[iloscStudentow].ocena);
}

void pobierzZPliku(const char * const nazwaPliku, FILE *plik, struct student Studenci[], int *iloscStudentow){
    *iloscStudentow = 0;
    if ((plik = fopen(nazwaPliku, "r")) == NULL){
        fprintf(stderr, "Nie moge otworzyc pliku %s\n", nazwaPliku);
        exit(2);
    }

    while (*iloscStudentow < MAX_STUDENTOW && fscanf(plik, "%s %s %d", Studenci[*iloscStudentow].imie, Studenci[*iloscStudentow].nazwisko, &Studenci[*iloscStudentow].ocena) == 3){
        *iloscStudentow++;
    }

    if(fclose(plik) != 0){
        fprintf(stderr, "Nie moge zamknac pliku %s\n", nazwaPliku);
        exit(3);
    }
}

double sredniaArytmetycznaOcen(int iloscStudentow, struct student Studenci[]){
    int licznik, srednia = 0;
    for (licznik = 0; licznik < iloscStudentow; licznik++){
        srednia += Studenci[licznik].ocena;
    }
    return (srednia * 1.0 / iloscStudentow );
}

int main(){
    int opcja = -1;
    int iloscStudentow = 0;
    char nowyStudent = '0';
    struct student Kowalski = {"Jan", "Kowalski", db};
    struct student Studenci[MAX_STUDENTOW];
    FILE *plik;
    const char * const nazwaPliku = "studenci.txt";
    // staly wskaznik do stalego napisu

    Studenci[iloscStudentow] = Kowalski; // przypisanie calej struktury
    iloscStudentow++;

    strncpy(Studenci[iloscStudentow].imie, "Adam", 12);
    Studenci[iloscStudentow].imie[11] = '\0'; // poprawne zakonczenie napisu
    strncpy(Studenci[iloscStudentow].nazwisko, "Wisniewski", 16);
    Studenci[iloscStudentow].nazwisko[15] = '\0';
    Studenci[iloscStudentow].ocena = dst;
    iloscStudentow++;

    do{
    puts("MENU:");
    puts("1. Lista wszystkich studentow");
    puts("2. Zapis danych do pliku");
    puts("3. Dodanie studenta");
    puts("4. Odczytaj z pliku");
    puts("5. Srednia arytmetyczna z ocen studentow");
    puts("0. Wyjscie z programu\n");
    puts("Wybierz opcje: ");

    scanf("%d", &opcja);
        if (opcja == 1)
            wyswietlWszyscyStudenci(iloscStudentow, Studenci);
        else if (opcja == 2)
            zapisz(nazwaPliku, plik, iloscStudentow, Studenci);
        else if (opcja == 3){
            if (iloscStudentow < MAX_STUDENTOW){
                dodajStudenta(iloscStudentow, Studenci);
                iloscStudentow++;
            } else
                puts("Brak wolnego miejsca na dopisanie studenta!");
        } else if (opcja == 4)
            pobierzZPliku(nazwaPliku, plik, Studenci, &iloscStudentow);
        else if (opcja == 5)
            printf("Srednia arytmetyczna ocen studentow wynosi: %.2lf\n", sredniaArytmetycznaOcen(iloscStudentow, Studenci));
        puts("");
    } while (opcja != 0);

    //Studenci[1].ocena = 444 // w ANSI C nie jest sprawdzana poprawnosc przypisania
    // dopiero w C++ nie pozwala na przypisanie 'int' do 'enum'

    return 0;
}
