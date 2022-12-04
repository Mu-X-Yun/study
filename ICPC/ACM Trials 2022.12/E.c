#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int judge(int a)
{
	if (a <= 2)
		return 0;
	int m = 0, n = 0;
	for (m = 2; m <= sqrt(a); m++)
	{
		if (a % m == 0)
		{
			n = 1;
			break;
		}
	}
	if (n == 0)
		return 1;
	else 
		return 0;
}
int main()
{
	int i = 0, m = 0, n = 0, a = 0, c = 0;
	scanf("%d", &m);
	for (n = 0; n < m; n++)
	{
		scanf("%d", &i);
		a += i;
		if (judge(a) == 1)
			c++;
	}
	printf("%d", c);
	return 0;
}