//����ĳ�̲�ϰ���ߵĵ����⡣
//�����һ��һά��������Ԫ�غ���СԪ�ص�λ�á�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 0 }, m = 0, i = 0, max = 0, min = 0;
	printf("������һ��ʮλ���ڵ�һά���飺");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (getchar() == '\n')
			break;
	}
	max = arr[0];
	min = arr[0];
	for (m = 0; m <= i; m++)
	{
		if (arr[m] > max)
			max = arr[m];
		if (arr[m] < min)
			min = arr[m];
	}
	printf("���Ԫ��Ϊ%d\n��СԪ��Ϊ%d", max, min);
	return 0;
}