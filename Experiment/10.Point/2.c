//����ָ��ʵ����ĵڶ��⡣
//��ָ��ʵ�ִӼ���������3��������������С���������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void swap(int* pt1, int* pt2);
void main()
{
	int a, b, c;
	int* pa, * pb, * pc;
	printf("Please input integer a,b,c:");
	scanf("%d,%d,%d", &a, &b, &c);
	pa = &a;
	pb = &b;
	pc = &c;
	if (a > b)swap(pa, pb);
	if (a > c)swap(pa, pc);
	if (b > c)swap(pb, pc);
	printf("after sort a,b,c:%d,%d,%d\n", a, b, c);
}
void swap(int* pt1, int* pt2)
{
	int p;
	p = *pt1;
	*pt1 = *pt2;
	*pt2 = p;
}