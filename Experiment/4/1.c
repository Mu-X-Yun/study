//����һ��ʵ���⡣
//���г���Ĺ����ǣ�����3���ֱ��ʾһ�����ӵĳ������ߵ�����ֵ���жϲ�����������������廹�ǳ����塣
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int l, w, h;
	printf("�����볤���,�Կո�ֿ���");
	scanf("%d %d %d", &l, &w, &h);
	if (l == w && w == h)
		printf("�������ǣ�������\n");
	else
		printf("�������ǣ�������\n");
}