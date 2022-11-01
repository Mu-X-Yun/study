//这是一个井字棋游戏的主源文件。
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game();
void menu()
{
	int i = 1;
	while(1)
	{
		printf("/------------------------------\\\n");
		printf("|       你想再来一次吗？       |\n");
		printf("|      1.是的      0.不是      |\n");
		printf("\\------------------------------/\n");
		printf("请选择>");
		scanf("%d", &i);
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
		if (judge(arr, R, C, '*'))
		{
			printf("玩家胜利\n");
			break;
		}
		else if (judge(arr, R, C, 'o'))
		{
			printf("电脑胜利\n");
			break;
		}
	}
	menu();
}
void welcome()
{
	int i = 0;
	printf("/--------------\\\n");
	printf("|  Tic-Tac-Toe |\n");
	printf("|    井字棋    |\n");
	printf("|输入任意键开始|\n");
	printf("\\--------------/\n");
	scanf("%d",&i);
}
int main()
{
	welcome();
	game();
	return 0;
}
