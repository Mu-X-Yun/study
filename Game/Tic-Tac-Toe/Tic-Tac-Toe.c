#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game();
void menu()
{
	int i = 1;
	while(1)
	{
		printf("/------------------------------\\\n");
		printf("|       ��������һ����       |\n");
		printf("|      1.�ǵ�      0.����      |\n");
		printf("\\------------------------------/\n");
		printf("��ѡ��>");
		scanf("%d", &i);
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
	char arr[R][C] = { 0 };
	system("cls");
	ini(arr, R, C);//��ʼ��
	print(arr, R, C);//��ʾ����
	while (1)
	{
		pm(arr, R, C);//�������
		system("cls");
		print(arr, R, C);
		cm(arr, R, C);//��������
		system("cls");
		print(arr, R, C);
		if (judge(arr, R, C, '*'))
		{
			printf("���ʤ��\n");
			break;
		}
		else if (judge(arr, R, C, 'o'))
		{
			printf("����ʤ��\n");
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
	printf("|    ������    |\n");
	printf("|�����������ʼ|\n");
	printf("\\--------------/\n");
	scanf("%d",&i);
}
int main()
{
	welcome();
	game();
	return 0;
}