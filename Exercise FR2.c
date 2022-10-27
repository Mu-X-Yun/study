//这是一个函数递归的练习题
//编写函数不允许创建临时变量，求字符串的长度
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(char* len)
{
	if (*len != '\0')
		return 1 + my_strlen(len + 1);
	else return 0;
}
int main()
{
	char arr[20] = { 0 };
	scanf("%s", arr);
	printf("%d", my_strlen(arr));
	return 0;
}