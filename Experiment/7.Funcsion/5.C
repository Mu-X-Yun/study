//���Ǻ���ʵ����ĵ����⡣
//��дһ��������������������һ������������Ƿ�Ϊ��������Ϣ��
//Ҫ��(1)������ΪisPeime()�����������������ֵΪ1�����򣬷���ֵΪ0��
//(2)������д��isPrime()֮ǰ���ڵ��øú���ǰ��Ҫ��������
//(3)���ϱ�������֮���ٽ��������Ƶ�isPrime()����֮��ɾ��ǰ����������ٱ������С�
//(4)��������isPrime()���޸���������ʵ�����100~1000֮�������������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//(1)(2)
//int isPrime(int n);
//int main()
//{
//	int n = 0;
//	printf("������һ����������");
//	scanf("%d", &n);
//	if (isPrime(n) == 1)
//		printf("�����������");
//	else
//		printf("�������������");
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
//	printf("������һ����������");
//	scanf("%d", &n);
//	if (isPrime(n) == 1)
//		printf("�����������");
//	else
//		printf("�������������");
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