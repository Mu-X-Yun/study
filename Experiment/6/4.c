//����ѭ���ṹ������ƶ�ʵ����ĵ����⡣
//��̣������ٵ����⣺��100ƥ������100������������3����������2����2ƥС����һ����Ҫ��һ����������û�п��е��������С�С��������һƥ������С�С������ƥ��
#include <stdio.h>
int main()
{
	int x = 1, y = 2;
	for (x = 1; x < 33; x++)
	{
		for (y = 2; y < 99 - x; y += 2)
		{
			if(3*x+2*(100-x-y) + y / 2 == 100)
				printf("����%dƥ������%dƥ��С��%dƥ\n", x, 100-x-y, y);
		}
	}
	return 0;
}