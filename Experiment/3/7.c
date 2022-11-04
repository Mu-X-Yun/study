////使用变量
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void main()
//{
//	int x, y, i;
//	printf("请输入整数x,y：");
//	scanf("%d%d", &x, &y);
//	printf("互换前x=%d，y=%d\n", x, y);
//	i = x;
//	x = y;
//	y = i;
//	printf("互换后x=%d，y=%d", x, y);
//}

//不使用变量
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int x, y, i;
	printf("请输入整数x,y：");
	scanf("%d%d", &x, &y);
	printf("互换前x=%d，y=%d\n", x, y);
	x += y;
	y = x - y;
	x = x - y;
	printf("互换后x=%d，y=%d", x, y);
}
