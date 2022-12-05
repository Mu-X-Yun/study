//这是数组（1）实验题的第四题。
#include <stdio.h>
void main()
{
	char a[11] = { 'I',' ','a','m',' ','a',' ','b','o','y' };
	printf("%s\n", a);
	for (int i = 0; i < 10; i++)
		printf("%c", a[i]);
	printf("\n");
}