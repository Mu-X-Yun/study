//这是一道实验题。
//下列程序的功能是：输入3个分别表示一个箱子的长、宽、高的整数值，判断并输出该箱子是正方体还是长方体。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int l, w, h;
	printf("请输入长宽高,以空格分开：");
	scanf("%d %d %d", &l, &w, &h);
	if (l == w && w == h)
		printf("该箱子是：正方体\n");
	else
		printf("该箱子是：长方体\n");
}