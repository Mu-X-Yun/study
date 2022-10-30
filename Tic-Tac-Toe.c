#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	char arr[R][C] = { 0 };
	system("cls");
	ini(arr, R, C);//初始化
	print(arr, R, C);//显示棋盘
	while (1)
	{
		pm(arr, R, C);//玩家下棋
		system("cls");
		print(arr, R, C);
		cm(arr, R, C);//电脑下棋
		system("cls");
		print(arr, R, C);
		break;
	}

}
void menu()
{
	int i = 1;
	for (; i != 0;)
	{
		printf("/------------------------------\\\n");
		printf("|       你想再来一次吗？       |\n");
		printf("|      1.是的      0.不是      |\n");
		printf("\\------------------------------/\n");
		printf("请选择>");
		scanf("%d", &i);
		switch (i)
		{
		case 1:game(); break;
		case 0:break;
		default:printf("请输入1或0！\n"); menu();
		}
	}
}
void welcome()
{
	int i = 0;
	printf("*** Tic-Tac-Toe ***\n");
	printf("***   井字棋    ***\n");
	printf("输入任意键开始：");
	scanf("%d",&i);
}
int main()
{
	welcome();
	game();
	menu();
	return 0;
}