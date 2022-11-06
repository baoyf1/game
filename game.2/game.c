#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include "game.h"
void initBoard(char board[LOW][COL], int low, int col)
{
	int i = 0;
	for (i = 0; i < low; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void printBoard(char board[LOW][COL], int low, int  col)
{
	int a = 0;
	for (a = 0; a < low; a++)
	{
		int b = 0;
		for (b = 0; b < col; b++)
		{
				printf(" %c ", board[a][b]);
				if (b < col - 1)
				{
					printf("|");
				}
				if (b == 2)
					printf("\n");
		}
		for (b = 0; b < col; b++)
		{
			if (a < low - 1)
			{
				printf("---");
			}	
			if(b<col-1&& a < low - 1)
				printf("|");
				if (b == 2 && a < low - 1)
					printf("\n");	
		}
	}
}
void player(char board[LOW][COL], int low, int col)
{
	int a = 0;
	int b = 0;
		printf("玩家请下棋:>");
		again:
		scanf("%d%d", &a, &b);	
		if (a > 0 && a <= 3 && b > 0 && b <= 3)
			;
		else
		{
			printf("输入错误请重新输入");
			
		}
		a = a - 1;
		b = b - 1; 
		if (board[a][b] == ' ')
		{
			board[a][b] = '#';
			
		}
		else
		{
			printf("此位置已被占用请选择其他位置\n");
			goto again;
		}
}
void complay(char board[LOW][COL], int low, int col)
{
	printf("电脑下:>\n");
	int i = 1;
	int x = 0;
	int y = 0;
	while (i)
	{
		x = rand() % low;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '*';
			i = 0;
			
		}
	
	}
}
char winer(char board[LOW][COL], int low, int col)
{
	int i = 0;
	for (i = 0; i < low; i++)
	{
		if (board[i][0] == '#' && board[i][1] == '#' && board[i][2] == '#')
			return '#';
		else if (board[i][0] == '*' && board[i][1] == '*' && board[i][2] == '*')
			return '*';
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == '#' && board[1][i] == '#' && board[2][i] == '#')
			return '#';
		else if (board[0][i] == '*' && board[1][i] == '*' && board[2][i] == '*')
			return '*';
	}
	if (board[0][0] == '#' && board[1][1] == '#' && board[2][2] == '#')
		return '#';
	else if (board[0][2] == '#' && board[1][1] == '#' && board[2][0] == '#')
		return '#';
	else if (board[0][0] == '*' && board[1][1] == '*' && board[2][2] == '*')
		return '*';
	else if (board[0][2] == '*' && board[1][1] == '*' && board[2][0] == '*')
		return '*';
	for (i = 0; i < low; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'Q';
		}
	}
	return 'c';
}