//����ѭ���ṹ������ƶ�ʵ����ĵڶ��⡣
//���յ�1�⣬��д����ʵ�����¹��ܡ�
//         *
//        ***
//       *****
//      *******
//       *****
//        ***
//         *
#include <stdio.h>
void main()
{
	int i, j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 10 - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 6 + i; j++)
			printf(" ");
		for (j = 1; j <= 7 - 2 * i; j++)
			printf("*");
		printf("\n");
	}
}