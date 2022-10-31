#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int a, b, c, x, y;
	printf("请输入一个三位的整数:");
	scanf("%d", &x);
	a = x / 100;
	b = x % 100 / 10;
	c = x % 10;
	y = c * 100 + b * 10 + a;
	printf(" % d : % d\n", x, y);
}