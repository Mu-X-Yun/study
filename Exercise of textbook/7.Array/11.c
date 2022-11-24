//这是某教材习题七的第十一题。
//从键盘输入若干字符串，编程计算最长行及其长度。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[100] = { 0 }, arr0[100] = { 0 };
	int max = 0, i = 0;
	scanf("%s", arr);
	strcpy(arr0, arr);
	max = strlen(arr);
	while (getchar() != '\n')
	{
		scanf("%s", arr);
		i = strlen(arr);
		if (i > max)
		{
			strcpy(arr0, arr);
			max = i;
		}
	}
	printf("最长行为%s，长度为%d", arr0, max);
	return 0;
}