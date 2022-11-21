//这是一道操作符的练习题。
//获取一个整数的二进制序列中所有的偶数位和奇数位，分别打印出二进制序列。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void A(int m)
{
	int i = 0;
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d", (m >> i) & 1);
	}
}
int main()
{
	int m = 0;
	printf("请输入一个整数：");
	scanf("%d", &m);
	printf("偶数位的二进制序列：");
	A(m);
	printf("\n奇数位的二进制序列：");
	A(m << 1);
	return 0;
}