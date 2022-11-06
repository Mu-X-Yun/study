#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define A 100
int main()
{
	int arr[A][A] = { 0 }, i = 0, j = 0, m1 = 0, n1 = 0, m2 = 0, n2 = 0, sum = 0;
	for (i = 0; i < A; i++)
	{
		for (j = 0; j < A; j++)
		{
			arr[i][j] = i + 1 + 2 * j;
		}
	}
	/*for (i = 0; i < A; i++)
	{
		for (j = 0; j < A; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/
	for (m1 = 1; m1 < A; m1++)
	{
		for (i = 0; i < A; i++)
		{
			if (i + m1 < A)
			{
				for (m2 = 1; m2 < A; m2++)
				{
					for (j = 0; j < A; j++)
					{
						if (j + m2 < A)
						{
							for (n1 = i; n1 < i + m1; n1++)
							{
								for (n2 = j; n2 < j + m2; n2++)
								{
									sum += arr[n1][n2];
									if (sum > 2022)break;
								}
							}
							if (sum == 2022)
							{
								printf("%d ", m1 * m2);
								break;
							}
						}
						sum = 0;
					}
				}
			}
		}
	}
}
