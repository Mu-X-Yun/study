//这是函数实验题的第六题。
//编程，用递归法求Fibonacci数列的第n项的值。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	printf("请输入Fibonacci数列要求的项数：");
	scanf("%d", &n);
	printf("%d", Fib(n));
	return 0;
}