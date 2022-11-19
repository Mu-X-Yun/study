//这是一道实验题。
//编写程序，求正整数m和n的最大公约数和最小公倍数。
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
int main()
{
	int m = 0, n = 0;
	printf("请输入两个整数：\n");
	scanf("%d%d", &m, &n);
	printf("这两个数的最大公约数是%d，最小公倍数是%d", GCD(m, n), LCM(m, n));
	return 0;
}