//����ָ��ʵ����ĵ����⡣
//��n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ������������5�����˳�Ȧ�ӣ���������µ��Ǽ��ţ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define max 50
void main()
{
	int i, k, n, m, a[max], * p;
	p = a;
	printf("input n:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		*(p + i) = i + 1;
		printf("%3d", *(p + i));
	}
	i = 0; k = 0; m = 0;
	while (m < n - 1)
	{
		if (*(p + i) != 0)
			k++;
		if (k == 5)
		{
			*(p + i) = 0;
			k = 0;
			m++;
		}
		i++;
		if (i == n)
			i = 0;
	}
	while (*p == 0)
		p++;
	printf("\nthe last No:%d\n", *p);
}