//����һ��ʵ���⡣
//��д��������ĳ��ѧ���ĵ��Ƴɼ����������Ӧ�ĵȼ���׼��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x = 0;
	printf("�����뵥�Ƴɼ���");
	scanf("%d", &x);
	printf("�ȼ�Ϊ��");
	if (x >= 90)printf("Excellent");
	if (x >= 80 && x < 90)printf("Good");
	if (x >= 70 && x < 80)printf("Middle");
	if (x >= 60 && x < 70)printf("Pass");
	if (x < 60)printf("Fail");
	return 0;
}