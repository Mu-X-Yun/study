//�������飨2��ʵ����ĵ����⡣
//��д����ʵ�ֽ�һ���ַ����е����д�д��ĸת��ΪСд��ĸ������ַ�����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[20] = { 0 };
	int i = 0, m = 0, n = 0;
	printf("������һ����ʮλ���ڵ��ַ�����\n");
	gets(arr);
	n = strlen(arr);
	for (m = 0; m < n; m++)
	{
		if (arr[m] >= 'A' && arr[m] <= 'Z')
			arr[m] += 32;
	}
	puts(arr);
}