#define _CRT_SECURE_NO_WARNINGS 1;
#include "game.h"
#include <stdio.h>
int  judj(z)
{
	if (z == '#')
	{
		printf("玩家赢");
		return 0;
	}
if (z == '*')
{
	printf("电脑赢");
	return 0;
}
if (z == 'Q')
return 1;
if (z == 'c')
{
	printf("平局");
	return 0;
}
}
void play()
{
	int a = 1;
	char board[LOW][COL] = { 0 };
	 initBoard(board, LOW, COL);// 初始化棋盘
	 printBoard(board, LOW, COL);//打印棋盘
	 while (a)
	 {
		 player(board, LOW, COL);
		 printBoard(board, LOW, COL);
		 char z = winer(board, LOW, COL);
		 a = judj(z);
		 if (a == 0)
		 {
			 break;
		 }
		 complay(board, LOW, COL);
		 printBoard(board, LOW, COL);
		 z = winer(board, LOW, COL);
		 a = judj(z);
		 
	 }
}
void menu()
{
	printf("##############################\n");
	printf("######1.open 0.exit###########\n");
	printf("##############################\n");
}
void game()
{
	while (1)
	{
		int i = 0;
		menu();
		printf("请选择:>");
		scanf("%d", &i);
		if (i == 0)
		{
			printf("退出游戏");
			break;
		}
		else if (i == 1)
		{
			printf("三子棋\n");
			play();
		}
		else
			printf("选择错误请重新输入\n");
		continue;
	}
}
	int main()
{
		srand((unsigned int)time(NULL));
	game();
	return 0;
}
