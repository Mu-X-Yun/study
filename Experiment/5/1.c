//这是循环结构程序设计一实验题的第一题。
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
