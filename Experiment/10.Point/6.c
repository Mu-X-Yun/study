//这是指针实验题的第六题。
//从键盘上输入4×4矩阵，调用函数 void convert(int * pt)实现矩阵的转置。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void convert(int* pt);
void main()
{
	int a[4][4], * p, i, j;
	printf("请输入4×4矩阵元素的值：\n");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			scanf("%d",&a[i][j]);
	p = &a[0][0];
	convert(p);
	printf("转置后的矩阵为：\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
void convert(int* pt)
{
	int i, j, t;
	for (i = 0; i < 4; i++)
		for (j = i; j < 4; j++)
		{
			t = *(pt + 4 * i + j);
			*(pt + 4 * i + j) = *(pt + 4 * j + i);
			*(pt + 4 * j + i) = t;
		}
}