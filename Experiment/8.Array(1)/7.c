//�������飨1��ʵ����ĵ����⡣
//��д����ʵ�ֽ������ַ���������������������Ҫ��ʹ��strcat������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
char* my_strcat(char* arr1, const char* arr2)
{
	char* p = arr1;
	assert(arr1 && arr2);//�ж������鲻Ϊ���ַ�
	while (*++arr1);//��arr1ָ������\0��
	while (*arr1++ = *arr2++);
	return p;
}
int main()
{
	char arr1[100] = { 0 }, arr2[100] = { 0 };
	printf("�����������ַ�����\n");
	gets(arr1);
	gets(arr2);
	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}