//����ѭ���ṹ������ƶ�ʵ����ĵ����⡣
//���溯���Ĺ��������100~300�������������ÿ��������������
#include <stdio.h>
#include <math.h>
void main()
{
	int i, j, k, flag, total = 0;
	for (i = 100; i <= 300; i++)
	{
		flag = 1;
		k = sqrt(i);
		for(j=2;j<=k;j++)
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		if (flag)
		{
			total++;
			printf("%d ", i);
			if (total % 5 == 0)
				printf("\n");
		}
	}
	printf("\nThe total is %d\n", total);
}