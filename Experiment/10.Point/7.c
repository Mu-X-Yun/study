//这是指针实验题的第七题。
//有n个人围成一圈，顺序排号。从第一个人开始报数，凡报到5的人退出圈子，问最后留下的是几号？
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define max 50
void main()
{
	int i, k, n, m, a[max], * p;
	p = a;
	printf("input n:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		*(p + i) = i + 1;
		printf("%3d", *(p + i));
	}
	i = 0; k = 0; m = 0;
	while (m < n - 1)
	{
		if (*(p + i) != 0)
			k++;
		if (k == 5)
		{
			*(p + i) = 0;
			k = 0;
			m++;
		}
		i++;
		if (i == n)
			i = 0;
	}
	while (*p == 0)
		p++;
	printf("\nthe last No:%d\n", *p);
}