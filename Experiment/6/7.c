//����ѭ���ṹ������ƶ��ĵ����⡣
//��̣��ҳ�1��10000֮���ȫ��ͬ��������ÿ�����10���������
#include <stdio.h>
int main()
{
	int m = 0, n = 0, i = 0, f = 0;
	for (i = 1; i <= 10000; i++)
	{
		int a = 1;
		while (1)
		{
			a *= 10;
			if (i / a == 0)
				break;
		}
		if (i * i % a == i)
		{
			printf("%-6d", i);
			f++;
		}
		if (f == 5)
		{
			f = 0;
			printf("\n");
		}
	}
	return 0;
}