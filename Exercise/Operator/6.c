//����һ������������ϰ�⡣
//��ȡһ�������Ķ��������������е�ż��λ������λ���ֱ��ӡ�����������С�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void A(int m)
{
	int i = 0;
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d", (m >> i) & 1);
	}
}
int main()
{
	int m = 0;
	printf("������һ��������");
	scanf("%d", &m);
	printf("ż��λ�Ķ��������У�");
	A(m);
	printf("\n����λ�Ķ��������У�");
	A(m << 1);
	return 0;
}