//����ĳ�̲�ϰ���ߵĵڶ��⡣
//�Ӽ������������ɸ�ѧ������ߣ������븺������������룩��ͳ�Ƴ�ƽ����ߣ����������ƽ��ֵ��ѧ������ߡ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[100] = { 0 }, m = 0, n = 0, i = 0;
	while (1)
	{
		scanf("%d", &i);
		if (i >= 0)
		{
			arr[m] = i;
			n += i;
			m++;
		}
		else break;
	}
	printf("ƽ�����Ϊ%d\n����ƽ����ߵ����Ϊ��\n", n /= m);
	for (i = 0; i < m; i++)
		if (arr[i] > n)
			printf("%d ", arr[i]);
	return 0;
}