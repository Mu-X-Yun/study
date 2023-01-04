#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0, j = 0, n = 0, a[1030] = { 1 };
	scanf("%d", &n);
	for (i = 0; i < 1 << n; i++)
	{
		for (j = 1; j < (1 << n) - i; j++)
			printf(" ");
		for (j = i; j >= 0; j--)
			a[j] ^= a[j - 1];
		if (i % 2)
			for (j = 0; j <= i; j += 2)printf(a[j] ? "/__\\" : "    ");
		else 
			for (j = 0; j <= i; j++)printf(a[j] ? "/\\" : "  ");
		printf("\n");
	}
	return 0;
}
