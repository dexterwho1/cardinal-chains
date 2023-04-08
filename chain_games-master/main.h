#ifndef UNTITLED5_MAIN_H
#define UNTITLED5_MAIN_H

extern int memoire[89][3];
extern int indice;

extern int memoire2[89][3];
extern int indice2;
#define X 9
#define Y 9

typedef struct {
    int GRID[X][Y];
    int N;
    int CASETROUVER[X*Y][3];
} Board;

#endif //UNTITLED5_MAIN_H
