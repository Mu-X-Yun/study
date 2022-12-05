//这是数组（2）实验题的第六题。
//函数yanghui（）能按以下样式形成一个杨辉三角形。
//	1
//	1	1
//	1	2	1
//	1	3	3	1
//	1	4	6	4	1
//	1	5	10	10	5	1
//	1	6	15	20	15	6	1
//	......
#include <stdio.h>
#define N 10
void main()
{
	int i, j;
	int a[N][N];
	void yanghui(int a[][N]);
	yanghui(a);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
}
void yanghui(int a[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < N; i++)
		for (j = 1; j <= i - 1; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
}