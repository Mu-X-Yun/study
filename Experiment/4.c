//����һ��ʵ���⡣
//��д������������m��n�����Լ������С��������
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
int main()
{
	int m = 0, n = 0;
	printf("����������������\n");
	scanf("%d%d", &m, &n);
	printf("�������������Լ����%d����С��������%d", GCD(m, n), LCM(m, n));
	return 0;
}