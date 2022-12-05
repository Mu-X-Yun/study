//这是数组（2）实验题的第三题。
//已知二维数组a中的元素为：
//		13	64	34
//		37	73	12
//		50	46	25
//编写程序，求二维数组a中的最大值和最小值。
#include <stdio.h>
int main()
{
	int arr[3][3] = { {13,64,34},{37,73,12},{50,46,25} }, max = arr[0][0], min = arr[0][0], i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
			if (arr[i][j] < min)
				min = arr[i][j];
		}
	}
	printf("The max is:%d\n", max);
	printf("The min is:%d", min);
	return 0;
}