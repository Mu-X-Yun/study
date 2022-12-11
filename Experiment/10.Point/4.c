//这是指针实验题的第四题。
//编写程序，将数组中所有对称位置元素的值交换。要求定义一个exchange(int a[])实现所有对称元素交换的功能。
#include <stdio.h>
#define N 10
void exchange(int b[])
{
	int p = 0, i = 0;
	for (i = 0; i < N / 2; i++)
	{
		p = *(b + i);
		*(b + i) = *(b + N - i - 1);
		*(b + N - i - 1) = p;
	}
}
void main()
{
	int i, a[N] = { 0,1,2,3,4,5,6,7,8,9 };
	printf("交换前的数组：\n\t");
	for (i = 0; i < N; i++)
		printf("%3d", a[i]);
	printf("\n");
	exchange(a);
	printf("交换后的数组：\n\t");
	for (i = 0; i < N; i++)
		printf("%3d", a[i]);
	printf("\n");
}