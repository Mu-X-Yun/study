//�������飨2��ʵ����ĵ����⡣
//��д����ʵ�־����ת�á�������ʾ��
//	1	2	3			1	4	7
//	4	5	6	--->	2	5	8
//	7	8	9			3	6	9
#define _CRT_SECURE_NO_WARNINGS 1
#define N 3
#include <stdio.h>
void T(int arr[N][N])
{
	int i = 0, j = 0, n = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j < i; j++)
		{
			n = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = n;
		}
}
int main()
{
	int arr[N][N] = { 0 }, i = 0, j = 0;
	printf("������һ��%d*%d�ľ���\n", N, N);
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &arr[i][j]);
	T(arr);
	printf("\nת�ú�\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}