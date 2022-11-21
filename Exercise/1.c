//这是一道指针的练习题。
//写一个函数打印数组arr的内容，不使用数组下标，使用指针。arr是一个整型一维数组。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", *(p + i));
}
int main()
{
	int arr[5] = { 0 }, i = 0, sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	printf("请输入一个五个元素的数组：\n");
	for (i = 0; i < 5; i++)
		scanf("%d", p + i);
	print(arr, sz);
	return 0;
}