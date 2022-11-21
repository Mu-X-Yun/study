//这是一道操作符的练习题。
//写一个函数返回参数二进制中1的个数。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int A(int m)
{
	int i = 0;
	while (m)
	{
		m = m & (m - 1);
		i++;
	}
	return i;
}
int main()
{
	int m = 0;
	printf("请输入一个整数：");
	scanf("%d", &m);
	printf("%d", A(m));
	return 0;
}