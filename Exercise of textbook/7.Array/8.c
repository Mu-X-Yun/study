//����ĳ�̲�ϰ���ߵĵڰ��⡣
//��һ��3x4�ľ����������Ԫ�ء�����Ԫ�ص�ֵ���ԴӼ��������룬Ҳ���ó�ʼ����ʽ������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[3][4] = { 0 }, max = 0, r = 0, c = 0;
	printf("������һ��3x4�ľ���\n");
	for (r = 0; r < 3; r++)
		for (c = 0; c < 4; c++)
		{
			scanf("%d", &arr[r][c]);
			if (r == 0 && c == 0)
				max = arr[0][0];
			if (max < arr[r][c])
				max = arr[r][c];
		}
	printf("�����������Ԫ����%d", max);
	return 0;
}