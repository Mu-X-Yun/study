#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void welcome()
{
	int i = 0;
	printf("/------------------\\\n");
	printf("|    Minesweeper   |\n");
	printf("|       ɨ��       |\n");
	printf("| �������ⰴ����ʼ |\n");
	printf("\\------------------/\n");
	scanf("%d", &i);
	system("cls");
}
void game();
void menu()
{
	int i = 1;
	while (1)
	{
		printf("/------------------------------\\\n");
		printf("|       ��������һ����       |\n");
		printf("|      1.�ǵ�      0.����      |\n");
		printf("\\------------------------------/\n");
		printf("��ѡ��>");
		scanf("%d", &i);
		system("cls");
		if (i == 1)
		{
			game();
			break;
		}
		else if (i == 0)break;
		else printf("������1��0��\n");
	}
}
void game()
{
	char HMF[R][C] = { 0 };
	char DMF[R][C] = { 0 };
	int i = 0;
	ini(HMF);
	ini(DMF);
	load(HMF);
	print(DMF);
	while (1)
	{
		i = play(HMF, DMF);
		chain1(HMF, DMF);
		system("cls");
		print(DMF);
		if (i == 1)
		{
			system("cls");
			print(HMF);
			printf("��������\n");
			break;
		}
		if (judge(HMF, DMF) == 1)
		{
			printf("��ʤ����\n");
			break;
		}
	}
	menu();
}
void main()
{
	welcome();
	game();
}