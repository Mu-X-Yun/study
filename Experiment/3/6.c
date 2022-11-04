#define _CRT_SECURE_NO_WARNINGS 1
#define PI 3.1415927
#include <stdio.h>
#include <math.h>
void main()
{
	float r, h, l, s, v;
	printf("请输入圆柱体的半径和高：");
	scanf("%f%f", &r, &h);
	l = PI * r * 2;
	s = PI * pow(r, 2);
	v = s * h;
	printf("圆的周长l=%f\n圆的面积s=%f\n圆柱体的体积v=%f", l, s, v);
}
