//����һ�������ݹ����ϰ�⡣
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
double Power(float n, int k)
{
	if (k > 0)
		return n * Power(n, k - 1);
	else if (k < 0)
		return 1 / n * Power(n, k + 1);
	else 
		return 1;
}
int main()
{
	double n = 0;
	int k = 0;
	printf("������n��k��\n");
	scanf("%lf%d", &n, &k);
	printf("%lf", Power(n, k));
	return 0;
}