//����ĳ�̲��ϵĵ����µĵڶ��⡣
//�����Զ��庯������ʽ���ʵ�֣���s=m!+n!+k!������m��n��k�Ӽ��̼��루ֵ��С��7����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Factorial(int x)
{
	int a = 1, b = 1;
	for (a = 1; a <= x; a++)b *= a;
	return b;
}
void main()
{
	int m = 0, n = 0, k = 0, s = 0;
	printf("������m,n,k��");
	scanf("%d %d %d", &m, &n, &k);
	s = Factorial(m) + Factorial(n) + Factorial(k);
	printf("���s��%d", s);
}