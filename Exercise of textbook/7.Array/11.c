//����ĳ�̲�ϰ���ߵĵ�ʮһ�⡣
//�Ӽ������������ַ�������̼�����м��䳤�ȡ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[100] = { 0 }, arr0[100] = { 0 };
	int max = 0, i = 0;
	scanf("%s", arr);
	strcpy(arr0, arr);
	max = strlen(arr);
	while (getchar() != '\n')
	{
		scanf("%s", arr);
		i = strlen(arr);
		if (i > max)
		{
			strcpy(arr0, arr);
			max = i;
		}
	}
	printf("���Ϊ%s������Ϊ%d", arr0, max);
	return 0;
}