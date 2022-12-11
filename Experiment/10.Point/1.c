//这是指针实验题的第一题。
#include <stdio.h>
void main()
{
	int a, b;
	int* pa, * pb;
	a = 10; b = 20;
	pa = &a;
	pb = &b;
	printf("a=%d,b=%d\n", a, b);
	printf("a=%d,b=%d\n", *pa, *pb);
}
