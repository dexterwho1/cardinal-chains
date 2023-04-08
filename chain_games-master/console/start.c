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

void start_game_defi() {
    int choice = 0;
    int choix = 1;
    Board board;
    init_board(&board);



    do {
        printf("choisissez un mode de jeu facile 1, moyen 2 ou difficile ?3\n");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);

    if (choice == 1) {
        board.compteurderetour = 1234;
        genererTableau(&board);
        playLevel(&board, choix, 2);
        board.indice = 0;
    }

    if (choice == 2) {
        board.compteurderetour = 3;
        genererTableau(&board);
        playLevel(&board, choix, 2);
        board.indice = 0;
    }

    if (choice == 3) {
        board.compteurderetour = 3;
        genererTableau(&board);

        pthread_t timerThread;
        pthread_create(&timerThread, NULL, timer, NULL);

        playLevel(&board, choix, 2);
        board.indice = 0;

        pthread_cancel(timerThread);
    }

}


void start_game_history() {

    int choix=1;
    Board board;

    board.compteurderetour = 1234;

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
            board.indice = 0;
            board.indice2=0;

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
    board.compteurderetour = 1234;


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
            board.indice = 0;
            board.indice2=0;

            printf("Bravo vous avez terminez le niveau \n Appuyez sur 'k' pour recommencer le niveau, ou sur une autre touche pour continuer.\n");
            char input = getchar();
            if (input == 'k') {
                restart_level = true;
            }
            while (getchar() != '\n');
        } while (restart_level);
    }
}