#include <stdio.h>
void main()
{
	char a=0;
	printf("������һ��Ӣ�ľ���:");
	for (a; a != '.';)
	{
		scanf_s("%c", &a);
		if (a == ' ')printf("\n");
		else printf("%c", a);
	}
}