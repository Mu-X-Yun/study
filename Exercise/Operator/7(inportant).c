//这是一道操作符的练习题。
//不允许创建临时变量，交换两个整数的内容。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x, y, i;
	printf("请输入整数x,y：");
	scanf("%d%d", &x, &y);
	printf("互换前x=%d，y=%d\n", x, y);
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	printf("互换后x=%d，y=%d", x, y);
	return 0;
}
