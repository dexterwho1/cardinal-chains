#include "../main.h"

int choisirChaine() {
    int choix;
    do {
        printf("\nChoisissez la couleur que vous souhaitez 1 ou 2:\n ");
        scanf("%d", &choix);
        viderBuffer();

    } while (choix != 1 && choix != 2);
    return choix;
}

void playLevel(Board *board, int choix,int type) {
    bool continuepartie = false;
    if (type==1) {
        while (continuepartie == false) {
            choix = choisirChaine();
            if (choix == 1) {
                printboardwithpos(board, memoire[indice][0], memoire[indice][1], choix);
            } else {
                printboardwithpos(board, memoire2[indice2][0], memoire2[indice2][1], choix);
            }
            demandeDeplacement(board, choix);
            continuepartie = compterCasesSuperieuresAZero(board);
        }
    } else if (type == 2) {
        while (continuepartie == false) {
            printboardwithpos(board, memoire[indice][0], memoire[indice][1], choix);
            demandeDeplacement(board, choix);
            continuepartie = compterCasesSuperieuresAZero(board);
        }
    }
}

void afficherCasesVisitees() {
    printf("indice = %d\n", indice);
    for (int i = 0; i < indice; i++) {
        printf("La case visitée était à la ligne %d et colonne %d, la valeur était %d\n", memoire[i][0] + 1, memoire[i][1] + 1, memoire[i][2]);
    }
}
