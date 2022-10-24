#include <stdio.h>
void main()
{
	int i, j, a;
	printf("请输入乘法表的大小;");
	scanf_s("%d", &a);
	printf("******************************乘法表******************************\n");
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
		printf("%d*%d=%-3d", j, i, i * j);
		printf("\n");
	}
}