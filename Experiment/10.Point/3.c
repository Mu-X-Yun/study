//这是指针实验题的第三题。
#include <stdio.h>
void main()
{
	int a[] = { 1,2,3,4,5 };
	int i, * p;
	p = a;
	printf("\n   a[i]:");
	for (i = 0; i < 5; i++)
		printf("%4d", a[i]);

	printf("\n   p[i]:");
	for (i = 0; i < 5; i++)
		printf("%4d", p[i]);

	printf("\n *(p+i):");
	for (i = 0; i < 5; i++)
		printf("%4d", *(p + i));

	printf("\n *(a+i):");
	for (i = 0; i < 5; i++)
		printf("%4d", *(a + i));
	printf("\n");
}