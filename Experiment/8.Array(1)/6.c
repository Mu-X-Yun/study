//�������飨1��ʵ����ĵ����⡣
//��д������һ��Ӣ���֣���������ʮ���ַ���ͳ�Ƴ�Ӣ�ĵ��ʵ�������
#include <stdio.h>
void main()
{
	char s[80];
	int i, n = 0, flag = 1;
	printf("input string:");
	gets(s);
	for (i = 0; s[i]; i++)
	{
		if (flag == 1)
		{
			if (s[i] != ' ')
			{
				n++;
				flag = 0;
			}
		}
		else if (s[i] == ' ')
			flag = 1;
	}
	printf("The total of words is %d\n", n);
	return ;
}