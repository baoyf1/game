#define _CRT_SECURE_NO_WARNINGS 1;
#include "game.h"
#include <stdio.h>
int  judj(z)
{
	if (z == '#')
	{
		printf("���Ӯ");
		return 0;
	}
if (z == '*')
{
	printf("����Ӯ");
	return 0;
}
if (z == 'Q')
return 1;
if (z == 'c')
{
	printf("ƽ��");
	return 0;
}
}
void play()
{
	int a = 1;
	char board[LOW][COL] = { 0 };
	 initBoard(board, LOW, COL);// ��ʼ������
	 printBoard(board, LOW, COL);//��ӡ����
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
		printf("��ѡ��:>");
		scanf("%d", &i);
		if (i == 0)
		{
			printf("�˳���Ϸ");
			break;
		}
		else if (i == 1)
		{
			printf("������\n");
			play();
		}
		else
			printf("ѡ���������������\n");
		continue;
	}
}
	int main()
{
		srand((unsigned int)time(NULL));
	game();
	return 0;
}
