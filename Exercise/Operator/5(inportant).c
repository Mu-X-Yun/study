//����һ������������ϰ�⡣
//дһ���������ز�����������1�ĸ�����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int A(int m)
{
	int i = 0;
	while (m)
	{
		m = m & (m - 1);
		i++;
	}
	return i;
}
int main()
{
	int m = 0;
	printf("������һ��������");
	scanf("%d", &m);
	printf("%d", A(m));
	return 0;
}