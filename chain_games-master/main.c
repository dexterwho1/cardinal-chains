#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include "main.h"
#include "level/history/level.c"
#include "gamelogic/deplacement.c"
#include "gamelogic/statesofgame.c"
#include "console/display.c"
#include "console/start.c"





int main() {
    int choice;
    int couleur=1;
    printf("Bienvenue au jeu Cardinal!\n");

    do {
        printf("Entrez un nombre entre 1 et 3:\nMode de jeu solo : appuyez sur un\nmode de jeu avec plusieurs couleurs : appuyez sur 2\n mode defi 3\n ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);

    if (choice == 1) {
        start_game_history();
    }

    if (choice == 2) {
        start_game_competition(couleur);
    }

    if(choice==3){
        start_game_defi();
    }


    return 0;
}
