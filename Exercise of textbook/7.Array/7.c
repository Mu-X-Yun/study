//����ĳ�̲�ϰ���ߵĵ����⡣
//��n��������ʹ��ǰ�������˳������ƶ�m��λ�ã����m���������ǰ���m��������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[100] = { 0 }, m = 0, n = 0, i = 0, j = 0, k = 0;
	printf("������һЩ����������ƶ���λ����\n");
	scanf("%d%", &arr[0]);
	for (n = 1; getchar() != '\n'; n++)
	{
		scanf("%d%", &arr[n]);
	}
	scanf("%d%", &m);
	for (i = n - m - 1; i >= 0; i--)
	{
		for (j = i; j < m + i; j++)
		{
			k = arr[j + 1];
			arr[j + 1] = arr[j];
			arr[j] = k;
		}
	}
	for (i = 0; i < n; i++)
		printf("%d", arr[i]);
	return 0;
}