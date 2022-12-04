//这是数组（1）实验题的第一题。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int a[5] = { 0,1,2,3,4 };
	int b[5];
	int c[5];
	b[0] = 5; b[1] = 6; b[2] = 7; b[3] = 8; b[4] = 9;
	printf("\narray a:%d %d %d %d %d \n", a[0], a[1], a[2], a[3], a[4]);
	printf("\narray b:%d ,%d ,%d ,%d ,%d \n", b[0], b[1], b[2], b[3], b[4]);
	int i = 0;
	for (i = 0; i < 5; i++)
		scanf("%d", &c[i]);
	printf("\narray c:");
	for (i = 0; i < 5; i++)
		printf("%d  ", c[i]);
	printf("\n");
}