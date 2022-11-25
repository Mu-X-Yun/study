//这是函数实验题的第一题。
//编程，在主函数中输入两个数a、b，然后分别用相应函数求两个数的和、差、积、商。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}
int sub(int x, int y)
{
	int z;
	z = x - y;
	return z;
}
int mut(int x, int y)
{
	int z;
	z = x * y;
	return z;
}
int div(int x, int y)
{
	int z;
	z = x / y;
	return z;
}
void main()
{
	int a, b;
	printf("Please input a,b:");
	scanf("%d,%d", &a, &b);
	printf("%d+%d=%d\n", a, b, add(a, b));
	printf("%d-%d=%d\n", a, b, sub(a, b));
	printf("%d*%d=%d\n", a, b, mut(a, b));
	printf("%d/%d=%d\n", a, b, div(a, b));
}
