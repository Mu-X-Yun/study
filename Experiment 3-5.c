#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
int main()
{
	float a, b, c, p, area;
	printf("�����������ε�������:");
	scanf("%f %f %f", &a, &b, &c);
	p = (a + b + c) / 2;
	area = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("�����ε����:%f\n", area);
	return 0;
}