#include "../main.h"
#include <stdio.h>
void viderBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}




void deplacerHaut(Board *board, int x, int y, int choix) {
    if (choix == 1) {
        if (board->memoire[board->indice][2] <= board->GRID[x - 1][y]) {
            board->indice++;
            board->memoire[board->indice][0] = x - 1;
            board->memoire[board->indice][1] = y;
            board->memoire[board->indice][2] = board->GRID[x - 1][y];
            board->GRID[x][y] = -2;
        } else {
        }
    }
    if (choix == 2) {
        x = board->memoire2[board->indice2][0];
        y = board->memoire2[board->indice2][1];
        if (board->memoire2[board->indice2][2] <= board->GRID[x - 1][y]) {
            board->indice2++;
            board->memoire2[board->indice2][0] = x - 1;
            board->memoire2[board->indice2][1] = y;
            board->memoire2[board->indice2][2] = board->GRID[x - 1][y];
            board->GRID[x][y] = -8;
        } else {;
        }
    }
}


void retourEnArriere(Board *board, int x, int y,int choix) {

    board->compteurderetour=board->compteurderetour-1;
    if(board->compteurderetour<=0){
        printf("\nTrop de retour en arriere la partie est perdu");
        exit(0);
    }

    if(choix==1){
        if (board->indice > 0) {
            board->GRID[x][y] = board->memoire[board->indice][2];
            board->indice--;
            x = board->memoire[board->indice][0];
            y = board->memoire[board->indice][1];
        } else {
;        }
    }
    else if(choix==2){
        if (board->indice2 > 0) {
            board->GRID[x][y] = board->memoire2[board->indice2][2];
            board->indice2--;

            x = board->memoire2[board->indice][0];
            y = board->memoire2[board->indice][1];
        } else {
            ;
        }
    }


}

void deplacerBas(Board *board, int x, int y,int choix) {
    if(choix==1){
        if (board->memoire[board->indice][2] <= board->GRID[x + 1][y]) {
            board->indice++;
            board->memoire[board->indice][0] = x + 1;
            board->memoire[board->indice][1] = y;
            board->memoire[board->indice][2] = board->GRID[x + 1][y];
            board->GRID[x][y] = -2;

        } else {
            ;
        }
    }
    if(choix==2){
        x = board->memoire2[board->indice2][0];
         y = board->memoire2[board->indice2][1];
        if (board->memoire2[board->indice2][2] <= board->GRID[x + 1][y]) {

            board->indice2++;
            board->memoire2[board->indice2][0] = x + 1;
            board->memoire2[board->indice2][1] = y;
            board->memoire2[board->indice2][2] = board->GRID[x + 1][y];
            board->GRID[x][y] = -8;

        } else {
            ;
        }
    }

}
void deplacerGauche(Board *board, int x, int y, int choix) {
    if(choix==1){
        if (board->memoire[board->indice][2] <= board->GRID[x][y - 1]) {
            board->indice++;

            board->memoire[board->indice][0] = x;
            board->memoire[board->indice][1] = y - 1;
            board->memoire[board->indice][2] = board->GRID[x][y - 1];
            board->GRID[x][y] = -2;
        } else {
            ;
        }
    }
    if(choix==2){
        x = board->memoire2[board->indice2][0];
        y = board->memoire2[board->indice2][1];
        if (board->memoire2[board->indice2][2] <= board->GRID[x][y - 1]) {

            board->indice2++;
            board->memoire2[board->indice2][0] = x;
            board->memoire2[board->indice2][1] = y - 1;
            board->memoire2[board->indice2][2] = board->GRID[x][y - 1];
            board->GRID[x][y] = -8;
        } else {
            ;
        }
    }
}

void deplacerDroite(Board *board, int x, int y, int choix) {
    if (choix == 1) {
        if (board->memoire[board->indice][2] <= board->GRID[x][y + 1]) {
            board->indice++;

            board->memoire[board->indice][0] = x;
            board->memoire[board->indice][1] = y + 1;
            board->memoire[board->indice][2] = board->GRID[x][y + 1];
            board->GRID[x][y] = -2;
        } else {
            ;
        }
    } else if (choix == 2) {
        if (board->memoire2[board->indice2][2] <= board->GRID[x][y + 1]) {
            board->indice2++;

            board->memoire2[board->indice2][0] = x;
            board->memoire2[board->indice2][1] = y + 1;
            board->memoire2[board->indice2][2] = board->GRID[x][y + 1];
            board->GRID[x][y] = -8;
        } else {
            ;
        }
    } else {
;    }
}

void executerDeplacement(Board *board, char direction, int x, int y,int choix) {
    switch (direction) {
        case 'z':
            deplacerHaut(board, x, y,choix);
            break;
        case 'q':
            deplacerGauche(board, x, y,choix);
            break;
        case 's':
            deplacerBas(board, x, y,choix);
            break;
        case 'd':
            deplacerDroite(board, x, y,choix);
            break;
        case 'r':
            retourEnArriere(board, x, y,choix);
            break;
        default:
            ;
            break;
    }


}


void demandeDeplacement(Board *board,int choix) {
    char direction = 'z';
    int n = board->N;
    n = n - 1;
    int x = board->memoire[board->indice][0];
    int y = board->memoire[board->indice][1];
    int value = board->CASETROUVER[n][2];

    printf("\nEntrez la direction (z, q, s, d, r) :\n ");
    scanf("%c", &direction);

    board->N++;
    executerDeplacement(board, direction, x, y,choix);

}


//
// Created by Ecole on 03/04/2023.
//