//���Ǻ���ʵ����ĵڶ��⡣
#include <stdio.h>
void swap(int a, int b)
{
	int t;
	t = a; a = b; b = t;
	printf("������a��bֵ������a=%d,b=%d\n", a, b);
}
void main()
{
	int x, y;
	x = 10;
	y = 20;
	printf("���ú���ǰx=%d,y=%d\n", x, y);
	swap(x, y);
	printf("���ú�����x=%d,y=%d\n", x, y);
}