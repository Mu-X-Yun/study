//这是某教材上的第六章的第二题。
//请用自定义函数的形式编程实现，求s=m!+n!+k!，其中m、n、k从键盘键入（值均小于7）。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Factorial(int x)
{
	int a = 1, b = 1;
	for (a = 1; a <= x; a++)b *= a;
	return b;
}
void main()
{
	int m = 0, n = 0, k = 0, s = 0;
	printf("请输入m,n,k：");
	scanf("%d %d %d", &m, &n, &k);
	s = Factorial(m) + Factorial(n) + Factorial(k);
	printf("输出s：%d", s);
}