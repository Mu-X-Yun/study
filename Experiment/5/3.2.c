//����һ��ʵ���⡣
//��д���򣬼���S=1/2+2/3+3/5+5/8+......��ǰ��ʮ��ĺͣ���
#include <stdio.h>
int main()
{
	float S = 0, m = 1, n = 2, a = 0;
	int  i = 0;
	for (i = 1; i <= 20; i++)
	{
		S += m / n;
		a = n;
		n += m;
		m = a;
	}
	printf("%f", S);
	return 0;
}