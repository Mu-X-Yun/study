//这是循环结构程序设计实验题的第三题的第一问。
//编写程序，计算S=1-1/2+1/3-1/4+1/5-...-1/100。
#include <stdio.h>
int main()
{
	float S = 0, sign = 1, i = 0;
	for (i = 1; i <= 100; i++)
	{
		S += sign * 1 / i;
		sign = -sign;
	}
	printf("%f", S);
	return 0;
}
