//这是某教材上的第五章的习题的第五题。
//使用嵌套循环输出一个用星号绘制的矩形盒子，盒子内部是空的，它的宽和高由用户输入。
#include <stdio.h>
int main()
{
	int w, h, i, j;
	printf("ÇëÊäÈëºÐ×ÓµÄ¿íºÍ¸ß:");
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
