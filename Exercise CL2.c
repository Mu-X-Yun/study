//这是随便找的一道条件与循环练习题。
//在一个有序数组中查找具体某个数字n，编写int binsearch(int x,int v[],int n);功能：在v[0]<=v[1]<=v[2]<=......<=v[n-1]的数组中查找x。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int l = 0, r = sizeof(arr) / sizeof(arr[0]) - 1, a = 0, i = 0;
	printf("请输入要找的数：");
	scanf("%d", &i);
	while (1)
	{
		a = (l + r) / 2;
		if (arr[a] > i)r = a - 1;
		else if (arr[a] < i)l = a + 1;
		else
		{
			printf("%d的下标为%d\n", i, a);
			break;
		}
		if (l > r)
		{
			printf("找不到\n");
			break;
		}
	}
}
