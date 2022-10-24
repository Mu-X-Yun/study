#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
float add(float, float);
float subtract(float, float);
float multiply(float, float);
void menu();
void main()
{
	while (1)
	{
		int i = 4;
		float a = 0, b = 0;
		menu();
		scanf("%d", &i);
		if (i == 0)
		{
			printf("结束\n");
			break;
		}
		if (i < 1 || i>3)printf("请输入正确的运算方式！！！\n\n");
		else
		{
			printf("请输入要运算的数（中间用空格隔开）：");
			scanf("%f %f", &a, &b);
			switch (i)
			{
			case 1:
			{
				printf(" % f + % f = % f\n\n", a, b, add(a, b));
				break;
			}
			case 2:
			{
				printf(" % f - % f = % f\n\n", a, b, subtract(a, b));
				break;
			}
			case 3:
			{
				printf(" % f * % f = % f\n\n", a, b, multiply(a, b));
				break;
			}
			}
		}
	}
}
float add(float x, float y)
{
	return x + y;
}
float subtract(float x, float y)
{
	return x - y;
}
float multiply(float x, float y)
{
	return x * y;
}
void menu()
{
	printf("请选择运算方式：加法（1），减法（2），乘法（3），退出（0）：");
}