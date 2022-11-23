//这是某教材习题七的第六题。
//求一个3x3矩阵对角线元素之和。
#define _CRT_SECURE_NO_WARNINGS 1
#define A 3
#include <stdio.h>
int main()
{
	int arr[A][A] = { 0 }, i = 0, r = 0, c = 0;
	printf("请输入一个%dx%d的矩阵：\n", A, A);
	for (r = 0; r < A; r++)
		for (c = 0; c < A; c++)
			scanf("%d", &arr[r][c]);
	for (r = 0, c = 0; r < A && c < A; r++, c++)
		i += arr[r][c];
	for (r = 0, c = A - 1; r < A && c >= 0; r++, c--)
		i += arr[r][c];
	if (A % 2 != 0);
	i -= arr[A / 2][A / 2];
	printf("对角线各元素之和为%d", i);
	return 0;
}