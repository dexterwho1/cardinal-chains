#include "../main.h"
#include <stdio.h>
void viderBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}




void deplacerHaut(Board *board, int x, int y, int choix) {
    if (choix == 1) {
        if (memoire[indice][2] <= board->GRID[x - 1][y]) {
            printf("plus petit");
            indice++;
            memoire[indice][0] = x - 1;
            memoire[indice][1] = y;
            memoire[indice][2] = board->GRID[x - 1][y];
            board->GRID[x][y] = -2;
        } else {
            printf("%d plus petit que l'erreur %d", memoire[indice][2], board->GRID[x - 1][y]);
        }
    }
    if (choix == 2) {
        printf("\n avant %d un", indice);
        printf("\n avant %d deux", indice2);
        x = memoire2[indice2][0];
        y = memoire2[indice2][1];
        printf("\n la valeur actuelle %d et la valeur suivante %d", memoire2[indice2][2], board->GRID[x - 1][y]);
        if (memoire2[indice2][2] <= board->GRID[x - 1][y]) {
            printf("plus petit");
            indice2++;
            memoire2[indice2][0] = x - 1;
            memoire2[indice2][1] = y;
            memoire2[indice2][2] = board->GRID[x - 1][y];
            board->GRID[x][y] = -8;
        } else {
            printf("%d plus petit que l'erreur %d", memoire[indice][2], board->GRID[x - 1][y]);
        }
    }
}


void retourEnArriere(Board *board, int x, int y,int choix) {
    if(choix==1){
        if (indice > 0) {
            board->GRID[x][y] = memoire[indice][2];
            indice--;
            x = memoire[indice][0];
            y = memoire[indice][1];
        } else {
            printf("Impossible de revenir en arrière.\n");
        }
    }
    else if(choix==2){
        if (indice2 > 0) {
            printf("\n \n avant %d",memoire2[indice2][2]);
            board->GRID[x][y] = memoire2[indice2][2];
            indice2--;
            printf("\n \n apres %d\n",memoire2[indice2][2]);

            x = memoire2[indice][0];
            y = memoire2[indice][1];
        } else {
            printf("Impossible de revenir en arrière.\n");
        }
    }


}

void deplacerBas(Board *board, int x, int y,int choix) {
    if(choix==1){
        if (memoire[indice][2] <= board->GRID[x + 1][y]) {
            printf("plus petit");
            indice++;
            memoire[indice][0] = x + 1;
            memoire[indice][1] = y;
            memoire[indice][2] = board->GRID[x + 1][y];
            board->GRID[x][y] = -2;

        } else {
            printf("%d plus petit que l'erreur %d", memoire[indice][2], board->GRID[x + 1][y]);
        }
    }
    if(choix==2){
        printf("\n avant %d uun",indice);
        printf("\n avant %d deuuux",indice2);
        x = memoire2[indice2][0];
         y = memoire2[indice2][1];
         printf("\n  la valeur de gauche %d",board->GRID[x ][y-1]);
        if (memoire2[indice2][2] <= board->GRID[x + 1][y]) {

            printf("plus petit");
            indice2++;
            memoire2[indice2][0] = x + 1;
            memoire2[indice2][1] = y;
            memoire2[indice2][2] = board->GRID[x + 1][y];
            board->GRID[x][y] = -8;

        } else {
            printf("%d plus petit que l'erreur %d", memoire[indice][2], board->GRID[x + 1][y]);
        }
    }

}
void deplacerGauche(Board *board, int x, int y, int choix) {
    if(choix==1){
        printf("actuellement %d et %d ", memoire[indice][2], board->GRID[x][y - 1]);
        if (memoire[indice][2] <= board->GRID[x][y - 1]) {
            printf("plus petit");
            indice++;

            memoire[indice][0] = x;
            memoire[indice][1] = y - 1;
            memoire[indice][2] = board->GRID[x][y - 1];
            board->GRID[x][y] = -2;
        } else {
            printf("plus grand");
        }
    }
    if(choix==2){
        printf("\n avant %d uun",indice);
        printf("\n avant %d deuuux",indice2);
        x = memoire2[indice2][0];
        y = memoire2[indice2][1];
        printf("\n la valeur de gauche %d",board->GRID[x][y - 1]);
        if (memoire2[indice2][2] <= board->GRID[x][y - 1]) {

            printf("plus petit");
            indice2++;
            memoire2[indice2][0] = x;
            memoire2[indice2][1] = y - 1;
            memoire2[indice2][2] = board->GRID[x][y - 1];
            board->GRID[x][y] = -8;
        } else {
            printf("%d plus petit que l'erreur %d", memoire[indice][2], board->GRID[x][y - 1]);
        }
    }
}

void deplacerDroite(Board *board, int x, int y, int choix) {
    if (choix == 1) {
        printf("actuellement %d et %d ", memoire[indice][2], board->GRID[x][y + 1]);
        if (memoire[indice][2] <= board->GRID[x][y + 1]) {
            printf("plus petit");
            indice++;

            memoire[indice][0] = x;
            memoire[indice][1] = y + 1;
            memoire[indice][2] = board->GRID[x][y + 1];
            board->GRID[x][y] = -2;
        } else {
            printf("plus grand");
        }
    } else if (choix == 2) {
        printf("actuellement %d et %d ", memoire2[indice2][2], board->GRID[x][y + 1]);
        if (memoire2[indice2][2] <= board->GRID[x][y + 1]) {
            printf("plus petit");
            indice2++;

            memoire2[indice2][0] = x;
            memoire2[indice2][1] = y + 1;
            memoire2[indice2][2] = board->GRID[x][y + 1];
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
    int x = memoire[indice][0];
    int y = memoire[indice][1];
    int value = board->CASETROUVER[n][2];

    printf("\nEntrez la direction (z, q, s, d, r) : ");
    scanf("%c", &direction);

    board->N++;
    executerDeplacement(board, direction, x, y,choix);

}


//
// Created by Ecole on 03/04/2023.
//