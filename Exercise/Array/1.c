//这是随便找的一道练习题。
//实现整型的冒泡排序。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10], i = 0, m = 0, n = 0, count = 0, a = 0;
	printf("请输入十个整数：\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	for (m = 0;m < 10; m++)
	{
		count = 0;
		for (n = 0; n < 10 - m; n++)
		{
			if (arr[n] < arr[n + 1])
			{
				a = arr[n];
				arr[n] = arr[n + 1];
				arr[n + 1] = a;
				count++;
			}
		}
		if (count == 0)
			break;
	}
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}
