//这是数组（2）实验题的第五题。
//编写程序，实现将一个字符串中的所有大写字母转换为小写字母并输出字符串。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[20] = { 0 };
	int i = 0, m = 0, n = 0;
	printf("请输入一个二十位以内的字符串：\n");
	gets(arr);
	n = strlen(arr);
	for (m = 0; m < n; m++)
	{
		if (arr[m] >= 'A' && arr[m] <= 'Z')
			arr[m] += 32;
	}
	puts(arr);
}