//��������ҵ�һ����ϰ�⡣
//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��½�ɹ���������ξ�����������˳�����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void main()
{
	int i = 0;
	char pw[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("������password��");
		scanf("%s", pw);
		if (strcmp(pw, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else printf("��¼ʧ��\n");
	}
	if (i == 3)printf("�������Σ��˳�����\n");
}