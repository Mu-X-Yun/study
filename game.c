#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void ini(char arr[R][C], int r, int c)
{
	int i = 0, j = 0;
	for (i = 0; i < r; i++) 
	{
		for (j = 0; j < c; j++)arr[i][j] = ' ';
	}
}
void print(char arr[R][C], int r, int c)
{
	int i = 0, j = 0, m = 0, n = 0;
	printf(" ");
	for (n = 1; n <= c; n++)printf("   %d", n);
	printf("\n  /");
	for (j = 0; j < c-1; j++)printf("----");
	printf("---\\");
	for (i = 0, m = 1; i < r; i++, m++)
	{
		printf("\n%d |", m);
		for (j = 0; j < c; j++)printf(" %c |", arr[i][j]);
		if (i < r - 1)
		{
			printf("\n  |");
			for (j = 0; j < c - 1; j++)printf("---|");
			printf("---|");
		}
	}
	printf("\n  \\");
	for (j = 0; j < c-1; j++)printf("----");
	printf("---/\n");
}
void pm(char arr[R][C],int r,int c)
{
	int i = 0, j = 0;
	while (1)
	{
		printf("请输入下的坐标：");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= r && j >= 1 && j <= c)
		{
			if (arr[i - 1][j - 1] == ' ')break;
			else printf("该坐标已有棋子！\n");
		}
		else printf("错误的坐标！\n");
	}
	arr[i-1][j-1] = '*';
}
void cm(char arr[R][C], int r, int c)
{
	int i = 0, j = 0;
	srand((unsigned int)time(NULL));
	while (1)
	{
		i = rand() % r;
		j = rand() % c;
		if (arr[i][j] == ' ')break;
	}
	arr[i][j] = 'o';
}
int judge(char arr[R][C], int r, int c, char m)
{
	int i = 0, j = 0, a = 0, b = 0;
	for (i = 0; i < R; i++)
	{
		for (j = 0, a = 0, b = 0; j < C; j++)
		{
			if (arr[i][j] == m)a++;
			if (arr[j][i] == m)b++;
		}
		if (a == R || b == R)return 1;
	}
	for (a = 0, b = 0, i = 0, j = 0; i < R && j < C; i++, j++)
	{
		if (arr[i][j] == m)a++;
		if (arr[i][R - 1 - j] == m)b++;
	}
	if (a == R || b == R)return 1;
	else return 0;
}
