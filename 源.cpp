#include <stdio.h>
void main()
{
	int i, j, a;
	printf("������˷���Ĵ�С;");
	scanf_s("%d", &a);
	printf("******************************�˷���******************************\n");
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
		printf("%d*%d=%-3d", j, i, i * j);
		printf("\n");
	}
}