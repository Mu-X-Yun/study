//这是随便找的一道练习题。
//计算1!+2!+3!+......+10!。
#include <stdio.h>
void main()
{
	int i = 1, a = 1, b = 0;
	for (i = 1; i <= 10; i++)
	{
		a *= i;
		b += a;
	}
	printf("%d\n", b);
}
