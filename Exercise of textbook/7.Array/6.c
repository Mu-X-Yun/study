//����ĳ�̲�ϰ���ߵĵ����⡣
//��һ��3x3����Խ���Ԫ��֮�͡�
#define _CRT_SECURE_NO_WARNINGS 1
#define A 3
#include <stdio.h>
int main()
{
	int arr[A][A] = { 0 }, i = 0, r = 0, c = 0;
	printf("������һ��%dx%d�ľ���\n", A, A);
	for (r = 0; r < A; r++)
		for (c = 0; c < A; c++)
			scanf("%d", &arr[r][c]);
	for (r = 0, c = 0; r < A && c < A; r++, c++)
		i += arr[r][c];
	for (r = 0, c = A - 1; r < A && c >= 0; r++, c--)
		i += arr[r][c];
	if (A % 2 != 0);
	i -= arr[A / 2][A / 2];
	printf("�Խ��߸�Ԫ��֮��Ϊ%d", i);
	return 0;
}