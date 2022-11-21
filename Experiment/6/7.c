//这是循环结构程序设计二的第七题。
//编程，找出1至10000之间的全部同构数，按每行输出10个数输出。
#include <stdio.h>
int main()
{
	int m = 0, n = 0, i = 0, f = 0;
	for (i = 1; i <= 10000; i++)
	{
		int a = 1;
		while (1)
		{
			a *= 10;
			if (i / a == 0)
				break;
		}
		if (i * i % a == i)
		{
			printf("%-6d", i);
			f++;
		}
		if (f == 5)
		{
			f = 0;
			printf("\n");
		}
	}
	return 0;
}