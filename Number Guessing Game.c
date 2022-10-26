//小游戏：猜数字
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int n = 1;
	srand((unsigned int)time(NULL));
	while (n == 1)
	{
		int i = 0, a = 0;
		printf("\n***** Numnber Guessing Game *****\nThis number is between 1 and 100.\nPlease enter your guess:\n");
		a = rand() % 100;
		while (1)
		{
			scanf("%d", &i);
			if (a < i)printf("It's bigger.\n");
			else if (a > i)printf("It's smaller.\n");
			else
			{
				printf("Your guess is right.\n");
				break;
			}
		}
		printf("******************************\n");
		printf("* Do you want to play again? *\n");
		printf("*      Yes(1)     No(0)      *\n");
		printf("******************************\n");
		scanf("%d", &n);
	}
}
