//����ĳ�̲��ϵĵ����µĵ�һ��
//���������һ��������λ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int a = 0, i = 1, n = 0;
	printf("������һ������");
	scanf("%d", &a);
	for (i = 1; i <= a; i = i * 10)n++;
	printf("����Ϊ%dλ��", n);
}