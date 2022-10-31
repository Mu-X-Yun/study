#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
int main()
{
	float a, b, c, p, area;
	printf("请输入三角形的三条边:");
	scanf("%f %f %f", &a, &b, &c);
	p = (a + b + c) / 2;
	area = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("三角形的面积:%f\n", area);
	return 0;
}