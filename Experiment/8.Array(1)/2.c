//这是数组（1）实验题的第二题。
//编写程序，输出一维数组a[10]中的元素最小值及其下标和最大值及其下标。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int i, max, min, pmax, pmin;
	int a[10];
	printf("Pleasr input a[0]...a[9]:");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	max = a[0]; pmax = 0;
	min = a[0]; pmin = 0;
	for (i = 1; i < 10; i++)
	{
		if (a[i] > max) { max = a[i]; pmax = i; }
		if (a[i] < min) { min = a[i]; pmin = i; }
	}
	printf("Max=a[%d]=%d\n", pmax, max);
	printf("Min=a[%d]=%d\n", pmin, min);
}