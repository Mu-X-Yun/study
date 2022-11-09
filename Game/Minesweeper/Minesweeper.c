#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void welcome()
{
	int i = 0;
	printf("/------------------\\\n");
	printf("|    Minesweeper   |\n");
	printf("|       扫雷       |\n");
	printf("| 输入任意按键开始 |\n");
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
		printf("|       你想再来一次吗？       |\n");
		printf("|      1.是的      0.不是      |\n");
		printf("\\------------------------------/\n");
		printf("请选择>");
		scanf("%d", &i);
		system("cls");
		if (i == 1)
		{
			game();
			break;
		}
		else if (i == 0)break;
		else printf("请输入1或0！\n");
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
			printf("踩雷啦！\n");
			break;
		}
		if (judge(HMF, DMF) == 1)
		{
			printf("获胜啦！\n");
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
