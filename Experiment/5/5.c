//这是循环结构程序设计一实验题的第五题。
//求所有水仙花数（水仙花数是一个三位数的自然数，该数的各位数的立方和等于本身）。
#include <stdio.h>
void main()
{
	int x, y, z;
	int k = 100;
	while (k<=999)
	{
		x = k / 100;
		y = (k / 10) % 10;
		z = k % 10;
		if (k == x * x * x + y * y * y + z * z * z)
			printf("%d\n", k);
		k++;
	}
}