#define _CRT_SECURE_NO_WARNINGS 1
#define PI 3.1415927
#include <stdio.h>
#include <math.h>
void main()
{
	float r, h, l, s, v;
	printf("������Բ����İ뾶�͸ߣ�");
	scanf("%f%f", &r, &h);
	l = PI * r * 2;
	s = PI * pow(r, 2);
	v = s * h;
	printf("Բ���ܳ�l=%f\nԲ�����s=%f\nԲ��������v=%f", l, s, v);
}