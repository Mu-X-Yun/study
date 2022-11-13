//这是一道实验题。
//编写程序，输入三个数，求出最大数、最小数并输出。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, max = 0, min = 0;
	printf("请输入三个数：\n");
	scanf("%d%d%d", &a, &b, &c);
	max = a;
	min = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	printf("最大值为%d，最小值为%d", max, min);
	return 0;
}