//这是某教材习题七的第八题。
//有一个3x4的矩阵，求其最大元素。矩阵元素的值可以从键盘上输入，也可用初始化方式给出。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[3][4] = { 0 }, max = 0, r = 0, c = 0;
	printf("请输入一个3x4的矩阵：\n");
	for (r = 0; r < 3; r++)
		for (c = 0; c < 4; c++)
		{
			scanf("%d", &arr[r][c]);
			if (r == 0 && c == 0)
				max = arr[0][0];
			if (max < arr[r][c])
				max = arr[r][c];
		}
	printf("这个矩阵的最大元素是%d", max);
	return 0;
}