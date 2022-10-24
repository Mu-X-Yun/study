#include <stdio.h>
int main()
{
	int w, h, i, j;
	printf("请输入盒子的宽和高:");
	scanf_s("%d %d", &w, &h);
	for (j = 1; j <= w; j++)
		printf("*");
	printf("\n");
	for (i = 1; i <= h - 2; i++)
	{
		printf("*");
		for (j = 1; j <= w - 2; j++)
			printf(" ");
		printf("*\n");
	}
	for (j = 1; j <= w; j++)
		printf("*");
	printf("\n");
	return 0;
}