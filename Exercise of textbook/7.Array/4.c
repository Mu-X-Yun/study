//����ĳ�̲�ϰ���ߵĵ����⡣
//һά�����е�������С���������ö��ַ������㷨��д����ָ��ֵx�ĳ������ҵ������x�������е�λ�ã��������û�ҵ��������Ϣ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[5] = { 1,3,5,7,9 }, sz = sizeof(arr) / sizeof(arr[0]), l = 0, r = sz - 1 , i = 0;
	printf("������Ҫ�ҵ�����");
	scanf("%d", &i);

	while (l <= r)
	{
		if (arr[(l + r) / 2] > i)
			r = (l + r) / 2 - 1;
		else if (arr[(l + r) / 2] < i)
			l = (l + r) / 2 + 1;
		else
			break;
	}
	if (l > r)
		printf("û�ҵ�");
	else
		printf("��������±�Ϊ%d", (l + r) / 2);
	return 0;
}