#include "../../main.h"


void init_level1(Board*board){
    int level[X][Y] = {

            {9},
            {9 },
            {9},
    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 2;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 0;
    board->GRID[0][2] = 0;
    board->CASETROUVER[board->N][0] = 0;
    board->CASETROUVER[board->N][1] = 2;
    board->CASETROUVER[board->N][2] = 0;


}

void init_level2(Board* board) {
    int level[X][Y] = {
            {-4},
            {2},
            {3},
    };

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
            // Trouver les coordonnées du point ayant la valeur -9
            if (level[i][j] == -4) {
                board->memoire[board->indice][0] = i;
                board->memoire[board->indice][1] = j;
                board->memoire[board->indice][2] = 1;
                board->GRID[i][j] =-4;

            }
        }
    }

    board->GRID[0][2] = 0;
    board->CASETROUVER[board->N][0] = 0;
    board->CASETROUVER[board->N][1] = 2;
    board->CASETROUVER[board->N][2] = 0;
}

void init_level3(Board*board){
    int choisit=1;
    int level[X][Y] = {

            {4, 8, 8},
            {8, 8, 8},
            {8, 8, 8},
            {8, 8, 8},
    };

    if(choisit==1) {
        for (int i = 0; i < X; i++) {
            for (int j = 0; j < Y; j++) {
                board->GRID[i][j] = level[i][j];
                // Trouver les coordonnées du point ayant la valeur -9
                if (level[i][j] == -4) {
                    board->memoire[board->indice][0] = i;
                    board->memoire[board->indice][1] = j;
                    board->memoire[board->indice][2] = 1;
                    board->GRID[i][j] = -4;

                }
            }
        }
    }

    else if(choisit==2) {
        for (int i = 0; i < X; i++) {
            for (int j = 0; j < Y; j++) {
                board->GRID[i][j] = level[i][j];
                // Trouver les coordonnées du point ayant la valeur -9
                if (level[i][j] == -8) {
                    board->memoire[board->indice][0] = i;
                    board->memoire[board->indice][1] = j;
                    board->memoire[board->indice][2] = 1;
                    board->GRID[i][j] = -8;

                }
            }
        }
    }


}

void init_level4(Board*board){
    int level[X][Y] = {

            {7,3,3,3,3},
            {0,0,0,0,2},
            {0,0,0,0,1},
    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 2;
    board->memoire[board->indice][1] = 4;
    board->memoire[board->indice][2] = 1;

}

void init_level5(Board*board){
    int level[X][Y] = {

            {1, 2, 3},
            {9, 8, 4},
            {9, 8, 5},
    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level6(Board*board){
    int level[X][Y] = {

            {0, 1, 1, 1, 2},
            {0, 0, 0, 0, 3},
            {0, 0, 0, 0, 4},
            {0, 0, 0, 0, 5},
            {9, 9, 9, 9, 6},
    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level7(Board*board){
    int level[X][Y] = {

            {1, 2, 3, 4, 5},
            {0, 0, 0, 0, 6},
            {0, 0, 0, 0, 7},
            {0, 0, 0, 0, 8},
            {0, 0, 0, 0, 0},

    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level8(Board*board){
    int level[X][Y] = {

            {1, 1, 1},
            {9, 0, 2},
            {9, 9, 3},

    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level9(Board*board){
    int level[X][Y] = {

            {1, 2, 3, 4},
            {0, 0, 0, 5},
            {0, 0, 0, 6},
            {9, 9, 9, 7},

    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level10(Board*board){
    int level[X][Y] = {

            {1, 1, 2, 3},
            {0, 0, 9, 4},
            {0, 0, 9, 5},
            {0, 0, 9, 6},

    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;


}

void init_level11(Board*board){
    int level[X][Y] = {

            {1, 1, 1, 2},
            {0, 0, 0, 3},
            {9, 9, 9, 4},
            {0, 0, 4, 4},

    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level12(Board*board){
    int level[X][Y] = {

            {1, 2, 3, 4, 5},
            {0, 0, 0, 0, 6},
            {9, 9, 9, 9, 7},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},

    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}


void init_level13(Board*board){
    int level[X][Y] = {

            {1, 2, 3},
            {0, 9, 4},
            {0, 9, 5},
            {0, 9, 6},

    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level14(Board*board){
    int level[X][Y] = {

            {1, 1, 2},
            {9, 0, 3},
            {9, 9, 4},

    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level15(Board*board){
    int level[X][Y] = {

            {1, 1, 1, 1},
            {9, 9, 0, 2},
            {9, 9, 9, 3},
            {0, 0, 0, 0},

    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level16(Board*board){
    int level[X][Y] = {

            {1, 2, 3},
            {0, 5, 4},
            {0, 6, 0},
            {0, 7, 9},

    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level17(Board*board){
    int level[X][Y] = {

            {1, 2, 3, 4},
            {9, 9, 9, 5},
            {0, 0, 0, 0},
            {0, 0, 0, 0},

    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level18(Board*board){
    int level[X][Y] = {

            {1, 1, 1, 1, 1},
            {0, 0, 0, 9, 2},
            {0, 0, 0, 9, 3},
            {0, 0, 0, 9, 4},
            {0, 0, 0, 9, 5},

    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level19(Board*board){
    int level[X][Y] = {

            {1, 1, 1},
            {0, 9, 2},
            {0, 9, 3},
            {0, 9, 4},
            {0, 9, 5},

    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level20(Board*board){
    int level[X][Y] = {

            {1, 2, 3},
            {9, 9, 4},
            {9, 0, 5},
            {9, 9, 6},


    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level21(Board*board){
    int level[X][Y] = {

            {1, 1, 1, 1, 1},
            {0, 0, 0, 0, 2},
            {0, 0, 0, 0, 3},
            {0, 0, 0, 0, 4},



    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level22(Board*board){
    int level[X][Y] = {

            {1, 2, 3, 4},
            {0, 9, 9, 5},
            {9, 9, 9, 6},
            {9, 0, 9, 7},



    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level23(Board*board){
    int level[X][Y] = {


            {1, 1, 2, 3},
            {9, 0, 0, 4},
            {9, 9, 9, 5},
            {0, 0, 0, 0},



    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level24(Board*board){
    int level[X][Y] = {


            {1, 1, 1, 1, 1},
            {1, 1, 1, 0, 2},
            {0, 0, 0, 0, 3},
            {0, 0, 0, 0, 4},
            {0, 0, 0, 0, 5},



    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level25(Board*board){
    int level[X][Y] = {


            {1, 2, 3},
            {0, 0, 4},
            {0, 0, 5},
            {0, 0, 6},
            {0, 0, 0},



    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level26(Board*board){
    int level[X][Y] = {


            {1, 2, 3, 4, 5},
            {8, 8, 8, 8, 6},
            {8, 8, 8, 8, 7},
            {9, 0, 0, 0, 0},



    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level27(Board*board){
    int level[X][Y] = {

            {1, 1, 1, 1, 1, 1},
            {0, 0, 0, 0, 0, 2},
            {0, 0, 0, 0, 0, 3},
            {0, 0, 0, 0, 0, 4},
            {0, 0, 0, 0, 0, 5},
            {0, 0, 0, 0, 0, 6},



    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level28(Board*board){
    int level[X][Y] = {

            {1, 2, 3, 4, 5, 6},
            {8, 8, 8, 8, 8, 7},
            {9, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0},




    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level29(Board*board){
    int level[X][Y] = {


            {1, 1, 2, 3},
            {9, 0, 0, 4},
            {9, 9, 9, 5},
            {0, 0, 0, 0},



    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = 1;

}

void init_level_1(Board*board){
    int level[X][Y] = {


            {1, 0, 0, 1},
            {2, 0, 0, 2},
            {3, 0, 0, 3},
            {0, 0, 0, 0},



    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = -4;

    board->memoire2[board->indice2][0] = 0;
    board->memoire2[board->indice2][1] = 3;
    board->memoire2[board->indice2][2] = -8;

}



void init_level_2(Board*board){
    int level[X][Y] = {


            {8, 5, 0, 1},
            {0, 5, 0, 4},
            {0, 5, 6, 5},
            {0, 7, 6, 0},



    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = -4;

    board->memoire2[board->indice2][0] = 0;
    board->memoire2[board->indice2][1] = 3;
    board->memoire2[board->indice2][2] = -8;

}

void init_level_3(Board*board){
    int level[X][Y] = {


            {1, 0, 0, 1},
            {1, 0, 0, 1},
            {1, 0, 1, 1},
            {0, 0, 1, 1},



    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = -4;

    board->memoire2[board->indice2][0] = 0;
    board->memoire2[board->indice2][1] = 3;
    board->memoire2[board->indice2][2] = -8;

}

void init_level_4(Board*board){
    int level[X][Y] = {


            {1, 0, 0, 1},
            {1, 0, 0, 1},
            {1, 0, 1, 1},
            {0, 0, 1, 0},



    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 0;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = -4;

    board->memoire2[board->indice2][0] = 0;
    board->memoire2[board->indice2][1] = 3;
    board->memoire2[board->indice2][2] = -8;

}

void init_level_5(Board*board){
    int level[X][Y] = {


            {1, 1, 1, 1},
            {1, 0, 0, 1},
            {1, 0, 0, 1},
            {1, 0, 0, 2},
            {1, 5, 6, 3},
            {1, 0, 0, 4},



    };
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            board->GRID[i][j] = level[i][j];
        }
    }
    board->memoire[board->indice][0] = 5;
    board->memoire[board->indice][1] = 0;
    board->memoire[board->indice][2] = -4;

    board->memoire2[board->indice2][0] = 4;
    board->memoire2[board->indice2][1] = 2;
    board->memoire2[board->indice2][2] = -8;

}



