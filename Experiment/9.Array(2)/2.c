//这是数组（2）实验题的第二题。
//编写程序，实现输出4*4的矩阵，并求对角线元素之和。
#include <stdio.h>
void main()
{
	int a[4][4] = { {11,12,13,14},{25,26,7,8},{13,9,10,22},{34,5,79,63} };
	int i, j, sum = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%-3d", a[i][j]);
		printf("\n");
	}
	for (i = 0; i < 4; i++)
		sum += (a[i][i] + a[i][3 - i]);
	printf("sum=%d\n", sum);
}