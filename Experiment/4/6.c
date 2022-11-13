//这是一道实验题。
//编写程序，输入某个学生的单科成绩，输出他对应的等级标准。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x = 0;
	printf("请输入单科成绩：");
	scanf("%d", &x);
	printf("等级为：");
	if (x >= 90)printf("Excellent");
	if (x >= 80 && x < 90)printf("Good");
	if (x >= 70 && x < 80)printf("Middle");
	if (x >= 60 && x < 70)printf("Pass");
	if (x < 60)printf("Fail");
	return 0;
}