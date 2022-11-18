//这是一道练习题。
//将数组A中的内容和数组B中的内容交换（数组一样大）。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	int arr1[10] = { 0 }, arr2[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0, m = 0;
	Print(arr1, sz);
	Print(arr2, sz);
	for (i = 0; i < sz; i++)
	{
		m = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = m;
	}
	Print(arr1, sz);
	Print(arr2, sz);
	return 0;
}