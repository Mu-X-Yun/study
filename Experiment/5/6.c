//这是循环结构程序设计一实验题的第六题。
//从键盘上输入一个大于2的整数n，判断n是否为素数。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
void main()
{
	int n, i, k;
	int flag = 1;
	printf("请输入正整数n：");
	scanf("%d", &n);
	k = sqrt(n);
	for (i = 2; i <= k; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
		printf("%d是素数\n", n);
	else
		printf("%d不是素数\n", n);
}