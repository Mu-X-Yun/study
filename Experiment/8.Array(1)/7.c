//这是数组（1）实验题的第七题。
//编写程序，实现将两个字符串连接起来并输出结果，要求不使用strcat函数。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
char* my_strcat(char* arr1, const char* arr2)
{
	char* p = arr1;
	assert(arr1 && arr2);//判断两数组不为空字符
	while (*++arr1);//将arr1指针移至\0处
	while (*arr1++ = *arr2++);
	return p;
}
int main()
{
	char arr1[100] = { 0 }, arr2[100] = { 0 };
	printf("请输入两行字符串：\n");
	gets(arr1);
	gets(arr2);
	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}