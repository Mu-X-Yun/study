//这是一道实验题。
//编写程序，计算n!，并输出结果。要求从键盘上输入一个整数n，如果n的值比较大，程序该如何处理，比如n=100。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double i = 0, n = 0, sum = 1;
	printf("请输入n：");
	scanf("%lf", &n);
	for (i = 1; i <= n; i++)
		sum *= i;
	printf("n!=%e", sum);
	return 0;
}