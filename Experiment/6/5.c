//这是循环结构程序设计二实验题的第五题。
//编程，求S=1!+2!+3!+...+10!。
#include <stdio.h>
int main()
{
	int S = 0, m = 0, n = 0, i = 1;
	for (m = 1; m <= 10; m++)
	{
		for (n = 1, i = 1; n <= m; n++)
			i *= n;
		S += i;
	}
	printf("%d", S);
	return 0;
}