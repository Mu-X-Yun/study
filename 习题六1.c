//这是某教材上的第六章的第一题
//编程求任意一个整数的位数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int a = 0, i = 1, n = 0;
	printf("请输入一个整数");
	scanf("%d", &a);
	for (i = 1; i <= a; i = i * 10)n++;
	printf("该数为%d位数", n);
}