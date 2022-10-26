//小游戏：猜数字
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int n = 1;
	while (n == 1)
	{
		int i = 0, a = 0;
		printf("\n***** Numnber Guessing Game *****\nThis number is between 1 and 100.\nPlease enter your guess:\n");
		scanf("%d", &i);
		a = (i * 114514 - 1919810) % 100;
		while (1)
		{
			if (a < i)printf("It's bigger.\n");
			else if (a > i)printf("It's smaller.\n");
			else
			{
				printf("Your guess is right.\n");
				break;
			}
			scanf("%d", &i);
		}
		printf("******************************\n");
		printf("* Do you want to play again? *\n");
		printf("*      Yes(1)     No(0)      *\n");
		printf("******************************\n");
		scanf("%d", &n);
	}
}
