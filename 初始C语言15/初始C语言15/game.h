#include <stdio.h>
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>
//����
void InitBoard(char board[ROW][COL],int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void CompuerMove(char board[ROW][COL], int row, int col);


//��������������Ϸ��״̬
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ�� - 'Q'
//���� - ''

char IsWin(char board[ROW][COL], int row, int col);