//这是函数实验题的第二题。
#include <stdio.h>
void swap(int a, int b)
{
	int t;
	t = a; a = b; b = t;
	printf("函数中a，b值交换后a=%d,b=%d\n", a, b);
}
void main()
{
	int x, y;
	x = 10;
	y = 20;
	printf("调用函数前x=%d,y=%d\n", x, y);
	swap(x, y);
	printf("调用函数后x=%d,y=%d\n", x, y);
}