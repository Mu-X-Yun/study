//�������飨2��ʵ����ĵ����⡣
//ͳ��5��ѧ����ÿ��ѧ��4�ſγ̵Ŀ��Գɼ���Ҫ�����ÿ��ѧ�����ܳɼ���ÿ��ѧ����ƽ���ɼ���û�ſγ̵���߷֣���ͷֺ�ƽ���֡�
#define _CRT_SECURE_NO_WARNINGS 1
#define M 5
#define N 4
#include <stdio.h>
int main()
{
	float arr[M][N] = { 0 },n = 0, max = 0, min = 0;
	int i = 0, j = 0;
	for (i = 0; i < M; i++)
	{
		printf("�������%d��ѧ���ĳɼ���\n", i + 1);
		for (j = 0; j < N; j++)
			scanf("%f", &arr[i][j]);
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0, n = 0; j < N; j++)
			n += arr[i][j];
		printf("��%d��ѧ�����ܳɼ�Ϊ%.2f\nƽ���ɼ�Ϊ%.2f\n", i + 1, n, n / N);
	}
	for (j = 0; j < N; j++)
	{
		max = arr[0][j];
		min = arr[0][j];
		for (i = 0, n = 0, i = 0; i < M; i++)
		{
			n += arr[i][j];
			if (arr[i][j] > max)
				max = arr[i][j];
			if (arr[i][j] < min)
				min = arr[i][j];
		}
		printf("��%d�ſ�Ŀ����߷�Ϊ%.2f����ͷ�Ϊ%.2f��ƽ����Ϊ%.2f\n", j + 1, max, min, n / M);
	}
	return 0;
}