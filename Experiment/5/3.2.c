//这是循环结构程序设计一实验题的第三题的第二问。
//编写程序，计算S=1/2+2/3+3/5+5/8+......（前二十项的和）。
#include <stdio.h>
int main()
{
	float S = 0, m = 1, n = 2, a = 0;
	int  i = 0;
	for (i = 1; i <= 20; i++)
	{
		S += m / n;
		a = n;
		n += m;
		m = a;
	}
	printf("%f", S);
	return 0;
}
