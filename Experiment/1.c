//这是数组（2）实验题的第一题。
#include <stdio.h>
void main()
{
	int i, j, a[3][3] = { {1,2,3},{4,5,6} };
	int b[3][3] = { 1,2,3,4,5,6 };
	printf("Output of array a:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("\n");
	printf("Output of array b:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}