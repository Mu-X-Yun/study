//这是指针实验题的第五题。
//编写程序，实现一个字符串的反转和两个字符串的连接。要求如下：
//（1）定义两个指针，分别指向输入的两个字符串，字符串的输入通过gets()实现。
//（2）定义一个函数char *reverse(char *str)，通过指针移动方式将一个字符串反转。
//（3）定义一个函数char *link(char *str1,char *str2),通过指针移动将两个字符串连接起来。
//（4）从主函数中调用上述函数，按照提示输入字符串实现相应的功能并打印输出结果。
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
