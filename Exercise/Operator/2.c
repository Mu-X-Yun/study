//这是条件运算符的一道练习题。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	scanf("%d", &a);
	(a > 5) ? (b = 3) : (b = -3);
	printf("%d", b);
	return 0;
}
