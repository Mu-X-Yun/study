//这是一道函数递归的练习题。
//编写一个函数实现n的k次方，使用递归实现。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
double Power(float n, int k)
{
	if (k > 0)
		return n * Power(n, k - 1);
	else if (k < 0)
		return 1 / n * Power(n, k + 1);
	else 
		return 1;
}
int main()
{
	double n = 0;
	int k = 0;
	printf("请输入n，k：\n");
	scanf("%lf%d", &n, &k);
	printf("%lf", Power(n, k));
	return 0;
}