//这是一道实验题。
//编写程序，从键盘上输入x的值，按下式计算y的值并输出。
//y=x,x<0
//y=2x-1,x=0
//y=3x-11,x>0
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x = 0, y = 0;
	printf("Please input:");
	scanf("%d", &x);
	if (x < 0)y = x;
	else if (x == 0)y = 2 * x - 1;
	else y = 3 * x - 11;
	printf("%d", y);
	return 0;
}