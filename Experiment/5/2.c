//����һ��ʵ���⡣
//��д���򣬼���n!������������Ҫ��Ӽ���������һ������n�����n��ֵ�Ƚϴ󣬳������δ�������n=100��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double i = 0, n = 0, sum = 1;
	printf("������n��");
	scanf("%lf", &n);
	for (i = 1; i <= n; i++)
		sum *= i;
	printf("n!=%e", sum);
	return 0;
}