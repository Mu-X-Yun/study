//����һ�������ݹ����ϰ�⡣
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�͡�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int DigitSum(int n)
{
	if (n / 10 != 0)
		return n % 10 + DigitSum(n / 10);
	else
		return n;
}
int main()
{
	int i = 0;
	printf("������һ���Ǹ�������");
	scanf("%d", &i);
	printf("%d", DigitSum(i));
	return 0;
}