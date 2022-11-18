//这是一道实验题。
//编写程序，计算sum=1+2+3+...+100,并输出结果。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int sum = 0, i = 0;
	for (i = 1; i <= 100; i++)
		sum += i;
	printf("%d", sum);
	return 0;
}
