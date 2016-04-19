#include <stdio.h>

void drukujTabliczke(int i){
    int pierwsza, druga;
    printf("  x  |");
    for (pierwsza = 1; pierwsza <= i ; pierwsza++){
        printf("%5d", pierwsza);
    }
    printf("   |");
    printf("\n");
    for (pierwsza = 1; pierwsza <= i * 5 + 10 ; pierwsza++){
        printf("-");
    }
    printf("\n");
	for (pierwsza = 1; pierwsza <= i ; pierwsza++){
        printf(" %2d  |", pierwsza);
		for (druga = 1; druga <= i ; druga++){

			printf("%5d",pierwsza * druga);
		}
		printf("   |");
		printf("\n");
	}
	for (pierwsza = 1; pierwsza <= i * 5 + 10 ; pierwsza++){
        printf("-");
    }
}

int main(){
    int ilosc = 0;
    do {
        printf("Z ilu liczb ma byc tabliczka mnozenia (1 - 13)?");
        scanf("%d", &ilosc);
    } while (ilosc <= 1 && ilosc >= 13);
    system("cls");
    drukujTabliczke(ilosc);
    getchar();
    getchar();
    return 0;
}
