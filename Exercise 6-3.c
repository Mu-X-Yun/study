//����ĳ�̲��ϵĵ����µĵ����⡣
//���д�����Զ��庯�����ֱ�ʵ�����������������Լ������С��������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int GCD(int x, int y)
{
	int i = 1;
	for (; i = x % y; x = y, y = i);
	return y;
}
int LCM(int x, int y)
{
	int max = 0, step = 0;
	if (x > y)max = step = x;
	else max = step = y;
	for (; max % x != 0 || max % y != 0; max += step);
	return max;
}
void main()
{
	int a = 0, b = 0;
	printf("����������������");
	scanf("%d %d", &a, &b);
	printf("���������������Լ��Ϊ%d����С������Ϊ%d\n", GCD(a, b), LCM(a, b));
}