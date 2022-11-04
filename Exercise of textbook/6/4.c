//这是某教材上的第六章的第四题。
//编写一个函数fsum（int m），计算任一输入的整数各位数的数字之和。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fsum(int m)
{
	int i = 1, sum = 0;
	for (; i < m; i = i * 10, sum += m % i / (i / 10));
	return sum;
}
void main()
{
	int a = 0;
	printf("请输入一个整数：");
	scanf("%d", &a);
	printf("它的各位数的数字之和为%d\n", fsum(a));
}
