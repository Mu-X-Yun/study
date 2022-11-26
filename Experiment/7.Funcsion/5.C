//这是函数实验题的第五题。
//编写一个函数，在主函数输入一个整数，输出是否为素数的信息。
//要求：(1)函数名为isPeime()，如果是素数，返回值为1，否则，返回值为0。
//(2)主函数写在isPrime()之前，在调用该函数前需要先声明。
//(3)以上编译运行之后，再将主函数移到isPrime()函数之后，删除前面的声明，再编译运行。
//(4)保留函数isPrime()，修改主函数，实现输出100~1000之间的所有素数。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//(1)(2)
//int isPrime(int n);
//int main()
//{
//	int n = 0;
//	printf("请输入一个正整数：");
//	scanf("%d", &n);
//	if (isPrime(n) == 1)
//		printf("这个数是素数");
//	else
//		printf("这个数不是素数");
//	return 0;
//}
//int isPrime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//		if (n % i == 0)
//			return 0;
//	return 1;
//}

//(3)
//int isPrime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//		if (n % i == 0)
//			return 0;
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个正整数：");
//	scanf("%d", &n);
//	if (isPrime(n) == 1)
//		printf("这个数是素数");
//	else
//		printf("这个数不是素数");
//	return 0;
//}

//(4)
int isPrime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}
int main()
{
	int n = 0, i = 0;
	for (n = 101; n < 1000; n += 2)
	{
		if (isPrime(n) == 1)
		{
			printf("%-4d", n);
			i++;
		}
		if (i == 10)
		{
			printf("\n");
			i = 0;
		}
	}
	return 0;
}