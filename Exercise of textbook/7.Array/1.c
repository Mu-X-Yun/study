//这是某教材上的习题七的第一题。
//将一个数组首尾颠倒，如数列2，4，6，8，10，12，14，16，18，20，要求按倒序的顺序储存并输出。
#include <stdio.h>
int main()
{
	int arr[] = { 2,4,6,8,10,12,14,16,18,20 };
	int m = 0, n = 0, i = 0, sz = sizeof(arr) / sizeof(arr[0]);
	for (m = 0, n = sz - 1; m < n; m++, n--)
	{
		i = arr[m];
		arr[m] = arr[n];
		arr[n] = i;
	}
	for (m = 0; m < sz; m++)
		printf("%d ", arr[m]);
	return 0;
}
