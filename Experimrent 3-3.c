#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	char c;
	printf("请输入小写字母：");
	c = getchar();
	c -= 32;
	printf("它的大写字母是：");
	putchar(c);
}