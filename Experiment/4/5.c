//这是一道实验题。
//编写程序，输入四个整数，按从大到小的顺序输出。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[4] = { 0 }, m = 0, n = 0, i = 0, j = 0;
	printf("请输入四个整数：\n");
	for (m = 0; m < 4; m++)
		scanf("%d", &arr[m]);
	for (n = 0; n < 4; n++)
	{
		for (m = 0, j = 0; m < 3; m++)
			if (arr[m] < arr[m + 1])
			{
				i = arr[m];
				arr[m] = arr[m + 1];
				arr[m + 1] = i;
				j++;
			}
		if (j == 0)break;
	}
	for (m = 0; m < 4; m++)
		printf("%d ", arr[m]);
	return 0;
}
