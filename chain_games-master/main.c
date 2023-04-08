#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include "main.h"
#include "level/history/level.c"
#include "gamelogic/deplacement.c"
#include "gamelogic/statesofgame.c"
#include "console/display.c"
#include "console/start.c"

int memoire[89][3];
int indice = 0;
int memoire2[89][3];
int indice2 = 0;

void start_game_history() {
    int choix=1;
    Board board;
    init_board(&board);

    void (*init_level_funcs[])(Board *) = {
            init_level1, init_level2, init_level3, init_level4, init_level5,
            init_level6, init_level7, init_level8, init_level9, init_level10,
            init_level11, init_level12, init_level13, init_level14, init_level15,
            init_level16, init_level17, init_level18, init_level19, init_level20,
            init_level21, init_level22, init_level23, init_level24, init_level25,
            init_level26, init_level27, init_level28, init_level29
    };
    const int num_levels = sizeof(init_level_funcs) / sizeof(init_level_funcs[0]);

    for (int i = 0; i < num_levels; i++) {
        bool restart_level;
        do {
            restart_level = false;
            printf("\nManche %d\n", i + 1);
            init_level_funcs[i](&board);
            playLevel(&board,choix,2);
            indice = 0;

            printf("Bravo vous avez terminez le niveau \n Appuyez sur 'k' pour recommencer le niveau, ou sur une autre touche pour continuer.\n");
            char input = getchar();
            if (input == 'k') {
                restart_level = true;
            }
            while (getchar() != '\n');
        } while (restart_level);
    }
}

void start_game_competition(int choix){
    Board board;
    init_board(&board);

    void (*init_level_funcs[])(Board *) = {
            init_level_1, init_level_2, init_level_3, init_level_4, init_level_5
    };
    const int num_levels = sizeof(init_level_funcs) / sizeof(init_level_funcs[0]);

    for (int i = 0; i < num_levels; i++) {
        bool restart_level;
        do {
            restart_level = false;
            printf("\nManche %d\n", i + 1);
            init_level_funcs[i](&board);
            playLevel(&board,choix,1);
            indice = 0;

            printf("Bravo vous avez terminez le niveau \n Appuyez sur 'k' pour recommencer le niveau, ou sur une autre touche pour continuer.\n");
            char input = getchar();
            if (input == 'k') {
                restart_level = true;
            }
            while (getchar() != '\n');
        } while (restart_level);
    }
}
int main() {
    int choice;
    int couleur=1;
    printf("Bienvenue au jeu Cardinal!\n");

    do {
        printf("Entrez un nombre entre 1 et 3:\nMode de jeu solo : appuyez sur un\nmode de jeu avec plusieurs couleurs : appuyez sur 2 ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 2);

    if (choice == 1) {
        start_game_history();
    }

    if (choice == 2) {
        start_game_competition(couleur);
    }


    return 0;
}
