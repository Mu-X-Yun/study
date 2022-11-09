#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int flag = 0;
void ini(char MF[R][C])//初始化雷区
{
	int i = 0, j = 0;
	for (i = 0; i < R; i++)
		for (j = 0; j < C; j++)
			MF[i][j] = ' ';
}
void load(char HMF[R][C])//布雷
{
	int i = 0, j = 0, m = 0, n = 0, a = 0;
	srand((unsigned int)time(NULL));
	while (m < M)
	{
		i = rand() % R;
		j = rand() % C;
		if (HMF[i][j] == ' ')
		{
			m++;
			HMF[i][j] = '*';
		}
	}
	for (i = 0; i < R; i++)
		for (j = 0; j < C; j++)
		{
			a = 0;
			if (HMF[i][j] == ' ')
			{
				if (i < R - 1)
					if (HMF[i + 1][j] == '*')
						a++;
				if (i > 0)
					if (HMF[i - 1][j] == '*')
						a++;
				if (j < C - 1)
					if (HMF[i][j + 1] == '*')
						a++;
				if (j > 0)
					if (HMF[i][j - 1] == '*')
						a++;
				if (i < R - 1 && j < C - 1)
					if (HMF[i + 1][j + 1] == '*')
						a++;
				if (i < R - 1 && j > 0)
					if (HMF[i + 1][j - 1] == '*')
						a++;
				if (i > 0 && j < C - 1)
					if (HMF[i - 1][j + 1] == '*')
						a++;
				if (i > 0 && j > 0)
					if (HMF[i - 1][j - 1] == '*')
						a++;
				HMF[i][j] = a+48;
			}
		}
}
void print(char MF[R][C])//打印雷区
{
	int i = 0, j = 0, m = 0, n = 0;
	printf("          雷数：%d          旗数：%d\n", M, M - flag);
	printf("  ");
	for (n = 1; n <= C; n++)
		printf("%4d", n);
	printf("\n   /");
	for (j = 0; j < C - 1; j++)
		printf("----");
	printf("---\\");
	for (i = 0, m = 1; i < R; i++, m++)
	{
		printf("\n%2d |", m);
		for (j = 0; j < C; j++)
			printf(" %c |", MF[i][j]);
		if (i < R - 1)
		{
			printf("\n   |");
			for (j = 0; j < C - 1; j++)
				printf("---|");
			printf("---|");
		}
	}
	printf("\n   \\");
	for (j = 0; j < C - 1; j++)
		printf("----");
	printf("---/\n");
}
void chain2(char HMF[R][C], char DMF[R][C], int i, int j)
{

	if (i < R - 1)
		if (DMF[i + 1][j] != '#')
			DMF[i + 1][j] = HMF[i + 1][j];
	if (i > 0)
		if (DMF[i - 1][j] != '#')
			DMF[i - 1][j] = HMF[i - 1][j];
	if (j < C - 1)
		if (DMF[i][j + 1] != '#')
			DMF[i][j + 1] = HMF[i][j + 1];
	if (j > 0)
		if (DMF[i][j - 1] != '#')
			DMF[i][j - 1] = HMF[i][j - 1];
	if (i < R - 1 && j < C - 1)
		if (DMF[i + 1][j + 1] != '#')
			DMF[i + 1][j + 1] = HMF[i + 1][j + 1];
	if (i < R - 1 && j > 0)
		if (DMF[i + 1][j - 1] != '#')
			DMF[i + 1][j - 1] = HMF[i + 1][j - 1];
	if (i > 0 && j < C - 1)
		if (DMF[i - 1][j + 1] != '#')
			DMF[i - 1][j + 1] = HMF[i - 1][j + 1];
	if (i > 0 && j > 0)
		if (DMF[i - 1][j - 1] != '#')
			DMF[i - 1][j - 1] = HMF[i - 1][j - 1];

}
void chain1(char HMF[R][C], char DMF[R][C])
{
	int i = 0, j = 0, m = 0, n = 0;
	for (m = 0; m < R; m++)
		for (n = 0; n < C; n++)
			for (i = 0; i < R; i++)
				for (j = 0; j < C; j++)
					if (DMF[i][j] == '0')
						chain2(HMF, DMF, i, j);
}
int play(char HMF[R][C], char DMF[R][C])//玩家扫雷
{
	int i = 0, j = 0, a = 0;
	char c = 0;
	while (1)
	{
		printf("请输入坐标（格式：“行 列”，插旗在坐标后加一个.）：\n");
		scanf("%d%d", &i, &j);
		i = i - 1;
		j = j - 1;
		c = getchar();
		if (DMF[i][j] == ' ')
		{
			if (c == '\n')
			{
				DMF[i][j] = HMF[i][j];
				if (HMF[i][j] == '*')
					return 1;
				else return 0;
			}
			else
			{
				flag++;
				DMF[i][j] = '#';
				return 0;
			}
		}
		else if (DMF[i][j] == '#')
		{
			flag--;
			DMF[i][j] = ' ';
			return 0;
		}
		else
		{
			a = 0;
			if (i < R - 1)
				if (DMF[i + 1][j] == '#')
					a++;
			if (i > 0)
				if (DMF[i - 1][j] == '#')
					a++;
			if (j < C - 1)
				if (DMF[i][j + 1] == '#')
					a++;
			if (j > 0)
				if (DMF[i][j - 1] == '#')
					a++;
			if (i < R - 1 && j < C - 1)
				if (DMF[i + 1][j + 1] == '#')
					a++;
			if (i < R - 1 && j > 0)
				if (DMF[i + 1][j - 1] == '#')
					a++;
			if (i > 0 && j < C - 1)
				if (DMF[i - 1][j + 1] == '#')
					a++;
			if (i > 0 && j > 0)
				if (DMF[i - 1][j - 1] == '#')
					a++;
			if (DMF[i][j] == a + 48)
				chain2(HMF, DMF, i, j);
			return 0;
		}
	}
}
int judge(char HMF[R][C], char DMF[R][C])//判断完成
{
	int i = 0, j = 0, a = 0;
	for (i = 0; i < R; i++)
		for (j = 0; j < C; j++)
		{
			if (DMF[i][j] == ' ')
				a++;
			if (DMF[i][j] == '#')
				a++;
		}
	if (a == M)
		return 1;
	else
		return 0;
}