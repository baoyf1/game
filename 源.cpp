#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int num = 10;
int main()
{
	int num = 10;
	printf("�������ѧϰ\n");
	printf("�ô���");
	int line = 0;
	while (line < 20000)
	{

		printf("line:%d\n", line);
		line++;
	}
	if (line == 20000)
	{
		printf("��offer");
	}

	return 0;
}