//这是数组（1）实验题的第六题。
//编写程序：有一行英文字，不超过八十个字符，统计出英文单词的数量。
#include <stdio.h>
void main()
{
	char s[80];
	int i, n = 0, flag = 1;
	printf("input string:");
	gets(s);
	for (i = 0; s[i]; i++)
	{
		if (flag == 1)
		{
			if (s[i] != ' ')
			{
				n++;
				flag = 0;
			}
		}
		else if (s[i] == ' ')
			flag = 1;
	}
	printf("The total of words is %d\n", n);
	return ;
}