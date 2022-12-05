//这是数组（2）实验题的第五题。
//统计5个学生，每个学生4门课程的考试成绩，要求输出每个学生的总成绩，每个学生的平均成绩，没门课程的最高分，最低分和平均分。
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
		printf("请输入第%d名学生的成绩：\n", i + 1);
		for (j = 0; j < N; j++)
			scanf("%f", &arr[i][j]);
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0, n = 0; j < N; j++)
			n += arr[i][j];
		printf("第%d名学生的总成绩为%.2f\n平均成绩为%.2f\n", i + 1, n, n / N);
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
		printf("第%d门科目的最高分为%.2f，最低分为%.2f，平均分为%.2f\n", j + 1, max, min, n / M);
	}
	return 0;
}