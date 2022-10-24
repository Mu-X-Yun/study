#include <stdio.h>
void main()
{
	char a=0;
	printf("请输入一个英文句子:");
	for (a; a != '.';)
	{
		scanf_s("%c", &a);
		if (a == ' ')printf("\n");
		else printf("%c", a);
	}
}