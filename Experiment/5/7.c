//����ѭ���ṹ�������һʵ����ĵ����⡣
//��д����ʵ����������һ���ַ����ֱ�ͳ��������Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
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
	printf("Ӣ���ַ���%d��\n", a);
	printf("�����ַ���%d��\n", b);
	printf("�ո��ַ���%d��\n", c);
	printf("�����ַ���%d��\n", d);
	return 0;
}