#include <stdio.h>
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>
//函数
void InitBoard(char board[ROW][COL],int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void CompuerMove(char board[ROW][COL], int row, int col);


//告诉我们四种游戏的状态
//玩家赢 - '*'
//电脑赢 - '#'
//平局 - 'Q'
//继续 - ''

char IsWin(char board[ROW][COL], int row, int col);