//����ĳ�̲��ϵĵ����µĵ����⡣
//��дһ������fsum��int m����������һ�����������λ��������֮�͡�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fsum(int m)
{
	int i = 1, sum = 0;
	for (; i < m; i = i * 10, sum += m % i / (i / 10));
	return sum;
}
void main()
{
	int a = 0;
	printf("������һ��������");
	scanf("%d", &a);
	printf("���ĸ�λ��������֮��Ϊ%d\n", fsum(a));
}