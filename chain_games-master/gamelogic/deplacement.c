#include "../main.h"
#include <stdio.h>
void viderBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}




void deplacerHaut(Board *board, int x, int y, int choix) {
    if (choix == 1) {
        if (board->memoire[board->indice][2] <= board->GRID[x - 1][y]) {
            printf("plus petit");
            board->indice++;
            board->memoire[board->indice][0] = x - 1;
            board->memoire[board->indice][1] = y;
            board->memoire[board->indice][2] = board->GRID[x - 1][y];
            board->GRID[x][y] = -2;
        } else {
            printf("%d plus petit que l'erreur %d", board->memoire[board->indice][2], board->GRID[x - 1][y]);
        }
    }
    if (choix == 2) {
        printf("\n avant %d un", board->indice);
        printf("\n avant %d deux", board->indice2);
        x = board->memoire2[board->indice2][0];
        y = board->memoire2[board->indice2][1];
        printf("\n la valeur actuelle %d et la valeur suivante %d", board->memoire2[board->indice2][2], board->GRID[x - 1][y]);
        if (board->memoire2[board->indice2][2] <= board->GRID[x - 1][y]) {
            printf("plus petit");
            board->indice2++;
            board->memoire2[board->indice2][0] = x - 1;
            board->memoire2[board->indice2][1] = y;
            board->memoire2[board->indice2][2] = board->GRID[x - 1][y];
            board->GRID[x][y] = -8;
        } else {
            printf("%d plus petit que l'erreur %d", board->memoire[board->indice][2], board->GRID[x - 1][y]);
        }
    }
}


void retourEnArriere(Board *board, int x, int y,int choix) {
    if(choix==1){
        if (board->indice > 0) {
            board->GRID[x][y] = board->memoire[board->indice][2];
            board->indice--;
            x = board->memoire[board->indice][0];
            y = board->memoire[board->indice][1];
        } else {
            printf("Impossible de revenir en arrière.\n");
        }
    }
    else if(choix==2){
        if (board->indice2 > 0) {
            printf("\n \n avant %d",board->memoire2[board->indice2][2]);
            board->GRID[x][y] = board->memoire2[board->indice2][2];
            board->indice2--;
            printf("\n \n apres %d\n",board->memoire2[board->indice2][2]);

            x = board->memoire2[board->indice][0];
            y = board->memoire2[board->indice][1];
        } else {
            printf("Impossible de revenir en arrière.\n");
        }
    }


}

void deplacerBas(Board *board, int x, int y,int choix) {
    if(choix==1){
        if (board->memoire[board->indice][2] <= board->GRID[x + 1][y]) {
            printf("plus petit");
            board->indice++;
            board->memoire[board->indice][0] = x + 1;
            board->memoire[board->indice][1] = y;
            board->memoire[board->indice][2] = board->GRID[x + 1][y];
            board->GRID[x][y] = -2;

        } else {
            printf("%d plus petit que l'erreur %d", board->memoire[board->indice][2], board->GRID[x + 1][y]);
        }
    }
    if(choix==2){
        printf("\n avant %d uun",board->indice);
        printf("\n avant %d deuuux",board->indice2);
        x = board->memoire2[board->indice2][0];
         y = board->memoire2[board->indice2][1];
         printf("\n  la valeur de gauche %d",board->GRID[x ][y-1]);
        if (board->memoire2[board->indice2][2] <= board->GRID[x + 1][y]) {

            printf("plus petit");
            board->indice2++;
            board->memoire2[board->indice2][0] = x + 1;
            board->memoire2[board->indice2][1] = y;
            board->memoire2[board->indice2][2] = board->GRID[x + 1][y];
            board->GRID[x][y] = -8;

        } else {
            printf("%d plus petit que l'erreur %d", board->memoire[board->indice][2], board->GRID[x + 1][y]);
        }
    }

}
void deplacerGauche(Board *board, int x, int y, int choix) {
    if(choix==1){
        printf("actuellement %d et %d ", board->memoire[board->indice][2], board->GRID[x][y - 1]);
        if (board->memoire[board->indice][2] <= board->GRID[x][y - 1]) {
            printf("plus petit");
            board->indice++;

            board->memoire[board->indice][0] = x;
            board->memoire[board->indice][1] = y - 1;
            board->memoire[board->indice][2] = board->GRID[x][y - 1];
            board->GRID[x][y] = -2;
        } else {
            printf("plus grand");
        }
    }
    if(choix==2){
        printf("\n avant %d uun",board->indice);
        printf("\n avant %d deuuux",board->indice2);
        x = board->memoire2[board->indice2][0];
        y = board->memoire2[board->indice2][1];
        printf("\n la valeur de gauche %d",board->GRID[x][y - 1]);
        if (board->memoire2[board->indice2][2] <= board->GRID[x][y - 1]) {

            printf("plus petit");
            board->indice2++;
            board->memoire2[board->indice2][0] = x;
            board->memoire2[board->indice2][1] = y - 1;
            board->memoire2[board->indice2][2] = board->GRID[x][y - 1];
            board->GRID[x][y] = -8;
        } else {
            printf("%d plus petit que l'erreur %d", board->memoire[board->indice][2], board->GRID[x][y - 1]);
        }
    }
}

void deplacerDroite(Board *board, int x, int y, int choix) {
    if (choix == 1) {
        printf("actuellement %d et %d ", board->memoire[board->indice][2], board->GRID[x][y + 1]);
        if (board->memoire[board->indice][2] <= board->GRID[x][y + 1]) {
            printf("plus petit");
            board->indice++;

            board->memoire[board->indice][0] = x;
            board->memoire[board->indice][1] = y + 1;
            board->memoire[board->indice][2] = board->GRID[x][y + 1];
            board->GRID[x][y] = -2;
        } else {
            printf("plus grand");
        }
    } else if (choix == 2) {
        printf("actuellement %d et %d ", board->memoire2[board->indice2][2], board->GRID[x][y + 1]);
        if (board->memoire2[board->indice2][2] <= board->GRID[x][y + 1]) {
            printf("plus petit");
            board->indice2++;

            board->memoire2[board->indice2][0] = x;
            board->memoire2[board->indice2][1] = y + 1;
            board->memoire2[board->indice2][2] = board->GRID[x][y + 1];
            board->GRID[x][y] = -8;
        } else {
            printf("plus grand");
        }
    } else {
        printf("Choix invalide.\n");
    }
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
            printf("\n");
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

    printf("\nEntrez la direction (z, q, s, d, r) : ");
    scanf("%c", &direction);

    board->N++;
    executerDeplacement(board, direction, x, y,choix);

}


//
// Created by Ecole on 03/04/2023.
//