//这是某教材上的第五章的习题的第三题。
//输入一个英文句子（以句号结束），要求将句中单词分行打印，试编写符合要求的程序。
#include <stdio.h>
void main()
{
	char a=0;
	printf("ÇëÊäÈëÒ»¸öÓ¢ÎÄ¾ä×Ó:");
	for (a; a != '.';)
	{
		scanf_s("%c", &a);
		if (a == ' ')printf("\n");
		else printf("%c", a);
	}
}
