//这是数组实验题的第三题。
//编写程序，对10个元素值进行排序，分别用冒泡法（升序）和选择法（降序）实现。
#define _CRT_SECURE_NO_WARNINGS 1
#define N 10
#include <stdio.h>
void sort1(int* arr,int sz)//冒泡法（升序）
{
	int i = 0, m = 0, n = 0, c = 0;
	for (i=0;i<sz;i++)
	{
		for (c = 0, m = 0; m < sz - i - 1; m++)
			if (arr[m + 1] < arr[m])
			{
				n = arr[m + 1];
				arr[m + 1] = arr[m];
				arr[m] = n;
				c++;
			}
		if (c == 0)
			break;
	}
}
void sort2(int* arr, int sz)//选择法（降序）
{
	int max = 0, i = 0, m = 0, n = 0;
	for (i = 0; i < N - 1; i++)
	{
		max = arr[i];
		n = i;
		for (m = i + 1; m < N; m++)
			if (arr[m] > max)
			{
				max = arr[m];
				n = m;
			}
		arr[n] = arr[i];
		arr[i] = max;
	}
}
int main()
{
	int arr[N] = { 0 }, i = 0;
	printf("请输入十个数字：\n");
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	sort1(arr, N);
	printf("冒泡法（升序）排序后：\n");
	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
	sort2(arr, N);
	printf("选择法（降序）排序后：\n");
	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);
	return 0;
}