//����ѭ���ṹ�������һʵ����ĵ����⡣
//�Ӽ���������һ������2������n���ж�n�Ƿ�Ϊ������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
void main()
{
	int n, i, k;
	int flag = 1;
	printf("������������n��");
	scanf("%d", &n);
	k = sqrt(n);
	for (i = 2; i <= k; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
		printf("%d������\n", n);
	else
		printf("%d��������\n", n);
}