#include "../main.h"
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <pthread.h>
#include <unistd.h>

void init_board(Board *board) {
    board->N=0;
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = 1;
        }
    }
}


bool  compterCasesSuperieuresAZero(Board *board,int type) {
    bool continuerpartie = false;
    int count = 0;


    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            if (board->GRID[i][j] > 0) {
                count++; // On incrémente le compteur pour chaque case ayant une valeur supérieure à 0
            }
        }
    }
    if(type==2){
        if (count <=1) {
            return continuerpartie=true;
        }
    }
    else if(type==1){

        if (count <=2) {
            return continuerpartie=true;
        }
    }
}

bool estPartieTerminee(Board *board) {

    int casesNonNulles2=0;

    bool continuepartie= true;


    int casesNonNulles = 0;
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            if (board->GRID[i][j] > 0) {
                casesNonNulles++;

            }
        }
        if (casesNonNulles > 0) {
            return continuepartie=false;
        }

    }

    return continuepartie;
}



void *timer(void *arg) {
    sleep(15);
    printf("\nTemps ecoule!\n");
    exit(0);
}