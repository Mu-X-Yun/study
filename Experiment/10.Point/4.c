//����ָ��ʵ����ĵ����⡣
//��д���򣬽����������жԳ�λ��Ԫ�ص�ֵ������Ҫ����һ��exchange(int a[])ʵ�����жԳ�Ԫ�ؽ����Ĺ��ܡ�
#include <stdio.h>
#define N 10
void exchange(int b[])
{
	int p = 0, i = 0;
	for (i = 0; i < N / 2; i++)
	{
		p = *(b + i);
		*(b + i) = *(b + N - i - 1);
		*(b + N - i - 1) = p;
	}
}
void main()
{
	int i, a[N] = { 0,1,2,3,4,5,6,7,8,9 };
	printf("����ǰ�����飺\n\t");
	for (i = 0; i < N; i++)
		printf("%3d", a[i]);
	printf("\n");
	exchange(a);
	printf("����������飺\n\t");
	for (i = 0; i < N; i++)
		printf("%3d", a[i]);
	printf("\n");
}