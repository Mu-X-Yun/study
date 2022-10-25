//这是某教材上的第六章的第三题。
//请编写两个自定义函数，分别实现求两个整数的最大公约数和最小公倍数。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int GCD(int x, int y)
{
	int i = 1;
	for (; i = x % y; x = y, y = i);
	return y;
}
int LCM(int x, int y)
{
	int max = 0, step = 0;
	if (x > y)max = step = x;
	else max = step = y;
	for (; max % x != 0 || max % y != 0; max += step);
	return max;
}
void main()
{
	int a = 0, b = 0;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	printf("这两个整数的最大公约数为%d，最小公倍数为%d\n", GCD(a, b), LCM(a, b));
}