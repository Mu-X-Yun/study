//这是一道函数递归的练习题。
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int DigitSum(int n)
{
	if (n / 10 != 0)
		return n % 10 + DigitSum(n / 10);
	else
		return n;
}
int main()
{
	int i = 0;
	printf("请输入一个非负整数：");
	scanf("%d", &i);
	printf("%d", DigitSum(i));
	return 0;
}