//����ĳ�̲�ϰ���ߵĵ����⡣
//�����ַ�������Ϊ����������ʵ���ַ�����غ����Ĺ��ܡ�
//(1)�ַ������Ӻ���strcat��
//(2)�ַ����ȽϺ���strcmp��
//(3)�ַ������Ⱥ���strlen��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* strcat(char* arr1, char* arr2)
{
	int m = 0, n = 0;
	for (m = 0; arr1[m] != '\0'; m++);
	for (n = 0; arr2[n] != '\0'; n++, m++)
		arr1[m] = arr2[n];
	arr1[m] == '\0';
	return arr1;
}
int strcmp(char* arr1, char* arr2)
{
	int m = 0;
	for (m = 0; arr1[m] != '\0' && arr2[m] != '\0'; m++)
	{
		if (arr1[m] > arr2[m])
			return 1;
		if (arr1[m] < arr2[m])
			return -1;
	}
	if (arr1[m] == '\0' && arr2[m] == '\0')
		return 0;
	if (arr1[m] == '\0')
		return -1;
	if (arr2[m] == '\0')
		return 1;
}
int strlen(char* arr)
{
	int m = 0;
	for (m = 0; arr[m] != '\0'; m++);
	return m;
}
int main()
{
	char arr1[15] = "Hello ", arr2[15] = "world!", arr3[15] = "Hello ";
	printf("%d\n", strcmp(arr1, arr2));
	printf("%d\n", strcmp(arr1, arr3));
	printf("%s\n", strcat(arr1, arr2));
	printf("%d\n", strlen(arr1));
	return 0;
}