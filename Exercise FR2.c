//����һ�������ݹ����ϰ��
//��д��������������ʱ���������ַ����ĳ���
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(char* len)
{
	if (*len != '\0')
		return 1 + my_strlen(len + 1);
	else return 0;
}
int main()
{
	char arr[20] = { 0 };
	scanf("%s", arr);
	printf("%d", my_strlen(arr));
	return 0;
}