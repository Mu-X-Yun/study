#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
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
		break;
	}

}
void menu()
{
	int i = 1;
	for (; i != 0;)
	{
		printf("/------------------------------\\\n");
		printf("|       ��������һ����       |\n");
		printf("|      1.�ǵ�      0.����      |\n");
		printf("\\------------------------------/\n");
		printf("��ѡ��>");
		scanf("%d", &i);
		switch (i)
		{
		case 1:game(); break;
		case 0:break;
		default:printf("������1��0��\n"); menu();
		}
	}
}
void welcome()
{
	int i = 0;
	printf("*** Tic-Tac-Toe ***\n");
	printf("***   ������    ***\n");
	printf("�����������ʼ��");
	scanf("%d",&i);
}
int main()
{
	welcome();
	game();
	menu();
	return 0;
}