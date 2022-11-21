//这是操作符的一道练习题。
//编程实现：两个int（32位）整数m和n的二进制表达中，由多少个位（bit）不同。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m = 0, n = 0, i = 0, a = 0;
	printf("请输入m，n：\n");
	scanf("%d%d", &m, &n);
	i = m ^ n;
	while (i)
	{
		i = i & (i - 1);
		a++;
	}
	printf("总共有%d位不同", a);
	return 0;
}