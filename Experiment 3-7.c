////ʹ�ñ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void main()
//{
//	int x, y, i;
//	printf("����������x,y��");
//	scanf("%d%d", &x, &y);
//	printf("����ǰx=%d��y=%d\n", x, y);
//	i = x;
//	x = y;
//	y = i;
//	printf("������x=%d��y=%d", x, y);
//}

//��ʹ�ñ���
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int x, y, i;
	printf("����������x,y��");
	scanf("%d%d", &x, &y);
	printf("����ǰx=%d��y=%d\n", x, y);
	x += y;
	y = x - y;
	x = x - y;
	printf("������x=%d��y=%d", x, y);
}