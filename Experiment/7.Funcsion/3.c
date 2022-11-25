//这是函数实验题的第三题。
//编写求x的n次方的函数[函数名为power()]，在主函数中输入x和n的值，调用函数power()。要求分别使用递归函数和非递归函数实现。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int power(int x, int n)//使用递归
{
	if (n <= 0)
		return 1;
	else
		return x * power(x, n - 1);
}
//int power(int x, int n)//不使用递归
//{
//	int i = 1;
//	for (; n > 0; n--)
//		i *= x;
//	return i;
//}
int main()
{
	int x = 0, n = 0;
	printf("请输入x，n：");
	scanf("%d%d", &x, &n);
	printf("%d^%d=%d",x,n,power(x, n));
	return 0;
}