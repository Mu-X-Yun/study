//这是某教材习题七的第十题。
//有N个国家名，对这N个国家名进行排序，并输出排序后的国家名。N个国家名由数组初始化给出。
#define _CRT_SECURE_NO_WARNINGS 1
#define N 5
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[N][10] = { {"China"}, {"America"}, {"Japan"}, {"Canada"}, {"England"} }, arr0[10] = { 0 };
	int m = 0, n = 0, count = 0;
	for (m = N; m > 0; m--)
	{
		count = 0;
		for (n = 0; n < m - 1; n++)
		{
			if (strcmp(arr[n], arr[n + 1]) > 0)
			{
				strcpy(arr0, arr[n]);
				strcpy(arr[n], arr[n + 1]);
				strcpy(arr[n + 1], arr0);
				count++;
			}
		}
		if (count == 0)
			break;
	}
	for (m = 0; m < N; m++)
		printf("%s ", arr[m]);
	return 0;
}