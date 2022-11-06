#pragma once
#include <time.h>
#include <stdlib.h>
#define LOW 3
#define COL 3
void initBoard(char board[LOW][COL], int low, int  col);
void printBoard(char board[LOW][COL], int low, int  col);
void player(char board[LOW][COL], int low, int col);
void complay(char board[LOW][COL], int low, int col);
char winer(char board[LOW][COL], int low, int col);