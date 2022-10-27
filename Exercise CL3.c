//这是随便找的一道条件与循环练习题。
//编写代码，演示多个字符从两端移到，向中间汇聚。
#include <stdio.h>
#include <string.h>
#include <windows.h>
void main()
{
	char arr1[] = "Hello,world!";
	char arr2[] = "############";
	int i = 0, l = 0, r = strlen(arr1) - 1;
	for (; l < r; l++, r--)
	{
		arr2[l] = arr1[l];
		arr2[r] = arr1[r];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
	}
	printf("%s\n", arr1);
}
