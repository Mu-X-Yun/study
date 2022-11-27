//这是某教材习题七的第五题。
//利用字符数组作为函数参数，实现字符串相关函数的功能。
//(1)字符串连接函数strcat。
//(2)字符串比较函数strcmp。
//(3)字符串长度函数strlen。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
char* strcat(char* arr1,const char* arr2)
{
	char* p = arr1;
	assert(arr1 && arr2);//判断两数组不为空字符
	while (*++arr1);//将arr1指针移至\0处
	while (*arr1++ = *arr2++);
	return p;
}
int strcmp(char* arr1, char* arr2)
{
	int m = 0;
	assert(arr1 && arr2);
	while (*arr1++ && *arr2++)
	{
		if (*arr1 > *arr2)
			return 1;
		if (*arr1 < *arr2)
			return -1;
	}
	if (*arr1 == 0 && *arr2 == 0)
		return 0;
	if (*arr1 == '\0')
		return -1;
	if (*arr2 == '\0')
		return 1;
}
int strlen(char* arr)
{
	int m = 0;
	assert(arr);
	for (m = 0; arr[m]; m++);
	return m;
}
int main()
{
	char arr1[15] = "Hello ", arr2[15] = "world!", arr3[15] = "Hello ";
	printf("%d\n", strcmp(arr1, arr2));
	printf("%d\n", strcmp(arr1, arr3));
	printf("%s\n", strcat(arr1, arr2));
	printf("%d\n", strlen(arr1));
	return 0;
}
