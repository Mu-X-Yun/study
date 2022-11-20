//这是循环结构程序设计二实验题的第二题。
//参照第1题，编写程序实现以下功能。
//         *
//        ***
//       *****
//      *******
//       *****
//        ***
//         *
#include <stdio.h>
void main()
{
	int i, j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 10 - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 6 + i; j++)
			printf(" ");
		for (j = 1; j <= 7 - 2 * i; j++)
			printf("*");
		printf("\n");
	}
}