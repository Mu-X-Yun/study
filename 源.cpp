#include <stdio.h>
void main()
{
	double a=0, i;
	for (i = 1; 1 / i > 0.0000001; i += 2)
	{
		a += 1 / i;
		i += 2;
		if (1 / i < 0.0000001)break;
		a -= 1 / i;
	}
	a = a * 4;
	printf("¦°=%lf\n", a);
}