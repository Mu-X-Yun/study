//���Ǻ���ʵ����ĵ����⡣
//��д��x��n�η��ĺ���[������Ϊpower()]����������������x��n��ֵ�����ú���power()��Ҫ��ֱ�ʹ�õݹ麯���ͷǵݹ麯��ʵ�֡�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int power(int x, int n)//ʹ�õݹ�
{
	if (n <= 0)
		return 1;
	else
		return x * power(x, n - 1);
}
//int power(int x, int n)//��ʹ�õݹ�
//{
//	int i = 1;
//	for (; n > 0; n--)
//		i *= x;
//	return i;
//}
int main()
{
	int x = 0, n = 0;
	printf("������x��n��");
	scanf("%d%d", &x, &n);
	printf("%d^%d=%d",x,n,power(x, n));
	return 0;
}