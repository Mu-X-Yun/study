//����ָ��ʵ����ĵ����⡣
//��д����ʵ��һ���ַ����ķ�ת�������ַ��������ӡ�Ҫ�����£�
//��1����������ָ�룬�ֱ�ָ������������ַ������ַ���������ͨ��gets()ʵ�֡�
//��2������һ������char *reverse(char *str)��ͨ��ָ���ƶ���ʽ��һ���ַ�����ת��
//��3������һ������char *link(char *str1,char *str2),ͨ��ָ���ƶ��������ַ�������������
//��4�����������е�������������������ʾ�����ַ���ʵ����Ӧ�Ĺ��ܲ���ӡ��������
#include <stdio.h>
char* reverse(int* str);
char* link(char* str1, char* str2);
void main()
{
	char str[30], str1[30], * str2;
	printf("Input reversing string:");
	gets(str);
	str2 = reverse(str);
	printf("\nOutput reversed string");
	puts(str2);
	printf("\nInput string1:");
	gets(str);
	printf("\nInput string2:");
	gets(str1);
	str2 = link(str, str1);
	printf("\nOutput string1+string2:");
	puts(str2);
}
char* reverse(char* str)
{
	char* p, * q, temp;
	p = str; q = str;
	while (*p != '\0')
		p++;
	p--;
	while (q < p)
	{
		temp = *q;
		*q = *p;
		*p = temp;
		p--;
		q++;
	}
	return str;
}
char* link(char* str1, char* str2)
{
	char* p = str1, * q = str2;
	while (*p != '\0')
		p++;
	while (*q != '\0')
	{
		*p = *q;
		p++;
		q++;
	}
	*p = '\0';
	return str1;
}
