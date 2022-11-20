//这是循环结构程序设计二实验题的第一题。
//输出以下图形：
//         *
//        ***
//       *****
//      *******
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
}
