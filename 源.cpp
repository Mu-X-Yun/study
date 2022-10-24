#include <stdio.h>
void main()
{
	double i,a=0;
	for (i = 1; i <= 10000; i+=2)
	{
		a += 1/i;
		i+=2;
		a -= 1/i;
	}
	printf("¦°=%lf", 4*a);
}