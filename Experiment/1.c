//���Ǻ���ʵ����ĵ�һ�⡣
//��̣���������������������a��b��Ȼ��ֱ�����Ӧ�������������ĺ͡�������̡�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}
int sub(int x, int y)
{
	int z;
	z = x - y;
	return z;
}
int mut(int x, int y)
{
	int z;
	z = x * y;
	return z;
}
int div(int x, int y)
{
	int z;
	z = x / y;
	return z;
}
void main()
{
	int a, b;
	printf("Please input a,b:");
	scanf("%d,%d", &a, &b);
	printf("%d+%d=%d\n", a, b, add(a, b));
	printf("%d-%d=%d\n", a, b, sub(a, b));
	printf("%d*%d=%d\n", a, b, mut(a, b));
	printf("%d/%d=%d\n", a, b, div(a, b));
}