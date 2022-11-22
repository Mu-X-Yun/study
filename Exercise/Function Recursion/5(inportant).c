//这是一道函数递归的练习题。
//编写一个函数reverse_string(char* string)（递归实现），将参数字符串的字符反向排列，不能使用c函数库中的字符串操作函数。
#include <stdio.h>
int my_strlen(char* arr)
{
	int i = 0;
	for (i = 0; arr[i] != '\0'; i++);
	return i;
}
void reverse_string(char* arr)
{
	char m = arr[0];
	int r = my_strlen(arr);
	arr[0] = arr[r - 1];
	arr[r - 1] = '\0';
	if (my_strlen(arr + 1) > 1)
		reverse_string(arr + 1);
	arr[r - 1] = m;
}
int main()
{
	char arr[] = "Helloworld!";
	printf("%s\n", arr);
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}