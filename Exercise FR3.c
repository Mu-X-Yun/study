//���Ǻ����ݹ��һ����ϰ�⡣
//��n�Ľ׳ˣ��������������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Factorial(int n)
{
	if (n != 0)
	{
		n *= Factorial(n - 1);
		return n;
	}
	else return 1;

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", Factorial(n));
}