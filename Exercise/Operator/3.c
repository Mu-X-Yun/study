//这是一道条件表达式的练习题。
//使用条件表达式实现找两个数中较大值。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0, b = 0, max = 0;
	printf("请输入两个数：\n");
	scanf("%d%d", &a, &b);
	max = (a > b) ? a : b;
	printf("这两个数之中的较大值是%d", max);
	return 0;
}
