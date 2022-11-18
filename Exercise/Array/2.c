//这是随便找的一道练习题。
//创建一个整型，完成对数组的操作：
//1.实现函数init()初始化数组全为0；
//2.实现print()打印数组的每个元素；
//3.实现reserve()函数完成数组元素的逆置。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void init(int arr[], int i)
{
	int m = 0;
	for (m = 0; m < i; m++)
		arr[m] = 0;
}
void print(int arr[], int i)
{
	int m = 0;
	for (m = 0; m < i; m++)
		printf("%d ", arr[m]);
	printf("\n");
}
void reverse(int arr[], int i)
{
	int l = 0, r = i - 1, m = 0;
	while (l < r)
	{
		m = arr[l];
		arr[l] = arr[r];
		arr[r] = m;
		l++;
		r--;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	print(arr, sz);
	return 0;
}