//这是数组（2）实验题的第七题。
//编写程序，实现输出如下所示的矩阵。
//	1	2	3	4	5
//	1	1	6	7	8
//	1	1	1	9	10
//	1	1	1	1	11
//	1	1	1	1	1
#define M 5
#define N 5
#include <stdio.h>
int main()
{
	int i = 0, j = 0, m = 2, c = 0;
	for (i = 1; i <= M; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%-5d", 1);
			c++;
		}
		for (; c < N; c++)
		{
			printf("%-5d", m++);
		}
		printf("\n");
		c = 0;
	}
	return 0;
}