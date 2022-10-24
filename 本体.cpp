#include <stdio.h>
void main()
{
	int a, g, s, b, q, c, i = 0;
	for (a = 100; a < 1001; a++)
	{
		g = a % 10;
		s = a % 100 / 10;
		b = a % 1000 / 100;
		q = a / 1000;
		if ((g + s + b + q) - 5 == 0)i++;
	}
	printf("%d",i);
}