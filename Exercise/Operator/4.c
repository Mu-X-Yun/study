//���ǲ�������һ����ϰ�⡣
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ɶ��ٸ�λ��bit����ͬ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m = 0, n = 0, i = 0, a = 0;
	printf("������m��n��\n");
	scanf("%d%d", &m, &n);
	i = m ^ n;
	while (i)
	{
		i = i & (i - 1);
		a++;
	}
	printf("�ܹ���%dλ��ͬ", a);
	return 0;
}