//����һ�����С����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void main()
{
	char arr[20] = { 0 };
	system("shutdown /s /t 60");
	printf("��ĵ��Խ���һ�����ڹػ�Ŷ�������롰���Ǳ�����ȡ����\n");
	while (1)
	{
		scanf("%s", arr);
		if (strcmp(arr, "���Ǳ���") == 0)
		{
			printf("�õģ�С����\n");
			system("shutdown /a");
			break;
		}
		else printf("�����Ǳ������������ĵ��Կɾ�Ҫ�ػ���Ŷ~\n");
	}
}