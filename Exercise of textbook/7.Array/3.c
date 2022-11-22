//这是某教材习题七的第三题。
//编程求一个一维数组的最大元素和最小元素的位置。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 0 }, m = 0, i = 0, max = 0, min = 0;
	printf("请输入一个十位以内的一维数组：");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (getchar() == '\n')
			break;
	}
	max = arr[0];
	min = arr[0];
	for (m = 0; m <= i; m++)
	{
		if (arr[m] > max)
			max = arr[m];
		if (arr[m] < min)
			min = arr[m];
	}
	printf("最大元素为%d\n最小元素为%d", max, min);
	return 0;
}