#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	char c;
	printf("������Сд��ĸ��");
	c = getchar();
	c -= 32;
	printf("���Ĵ�д��ĸ�ǣ�");
	putchar(c);
}