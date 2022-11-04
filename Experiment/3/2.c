#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int a, b;
	float d, e;
	char c1, c2;
	double f, g;
	long m, n;
	unsigned int p, q;
	a = 11; b = 22;
	c1 = 'A'; c2 = 'B';
	d = 1.23; e = -4.56;
	f = 1234.56789; g = 0.123456789;
	m = 50000; n = -60000;
	p = 32768; q = 40000;
	printf("a=%d,b=%d\nc1=%c,c2=%c\n", a, b, c1, c2);
	printf("d=%6.2f,e=%6.2f\n", d, e);
	printf("f=%15.6f,g=%15.10f\n", f, g);
	printf("m=%ld,n=%ld\np=%u,q=%u\n", m, n, p, q);
}
