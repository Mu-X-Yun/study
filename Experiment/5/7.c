//这是循环结构程序设计一实验题的第七题。
//编写程序，实现输入任意一行字符，分别统计其中中英文字母、空格、数字和其他字符的个数。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char ch = 0;
	int a = 0, b = 0, c = 0, d = 0;
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
			a++;
		else if (ch >= '0' && ch <= '9')
			b++;
		else if (ch == ' ')
			c++;
		else
			d++;
	}
	printf("英文字符有%d个\n", a);
	printf("数字字符有%d个\n", b);
	printf("空格字符有%d个\n", c);
	printf("其他字符有%d个\n", d);
	return 0;
}