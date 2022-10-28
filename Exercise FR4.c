//这是函数递归的一道练习题。
//求第n个斐波那契数。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int F(int n)
{
	if (n <= 2)return 1;
	else return F(n - 1) + F(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", F(n));
	return 0;
}