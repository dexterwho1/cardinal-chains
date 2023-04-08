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
                printboardwithpos(board, board->memoire[board->indice][0], board->memoire[board->indice][1], choix);
            } else {
                printboardwithpos(board, board->memoire2[board->indice2][0], board->memoire2[board->indice2][1], choix);
            }
            demandeDeplacement(board, choix);
            continuepartie = compterCasesSuperieuresAZero(board,type);
        }
    } else if (type == 2) {
        while (continuepartie == false) {
            printboardwithpos(board, board->memoire[board->indice][0], board->memoire[board->indice][1], choix);
            demandeDeplacement(board, choix);
            continuepartie = compterCasesSuperieuresAZero(board,type);
        }
    }
}

void afficherCasesVisitees() {
 int a =0;
}
