//这是某教材习题七的第二题。
//从键盘上输入若干个学生的身高（用输入负数结果结束输入），统计出平均身高，并输出高于平均值的学生的身高。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[100] = { 0 }, m = 0, n = 0, i = 0;
	while (1)
	{
		scanf("%d", &i);
		if (i >= 0)
		{
			arr[m] = i;
			n += i;
			m++;
		}
		else break;
	}
	printf("平均身高为%d\n高于平均身高的身高为：\n", n /= m);
	for (i = 0; i < m; i++)
		if (arr[i] > n)
			printf("%d ", arr[i]);
	return 0;
}