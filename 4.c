//����һ��ʵ���⡣
//��д����������������������������С���������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, max = 0, min = 0;
	printf("��������������\n");
	scanf("%d%d%d", &a, &b, &c);
	max = a;
	min = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	printf("���ֵΪ%d����СֵΪ%d", max, min);
	return 0;
}