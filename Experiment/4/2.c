//����һ��ʵ���⡣
//���³���Ĺ���Ϊ��ͨ��������ݺ��·ݣ��жϸ��µ�������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int y, m, d;
	printf("please input year and mounth:");
	scanf("%d,%d", &y, &m);
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:d = 31; break;
	case 4:
	case 6:
	case 9:
	case 11:d = 30; break;
	case 2:if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)d = 29;
		  else
			d = 28;
			break;
	default:printf("INPUT ERROR!");
	}
	printf("%d��%d�·���%d�졣\n", y, m, d);
}