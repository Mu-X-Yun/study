//����һ��ָ�����ϰ�⡣
//дһ��������ӡ����arr�����ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", *(p + i));
}
int main()
{
	int arr[5] = { 0 }, i = 0, sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	printf("������һ�����Ԫ�ص����飺\n");
	for (i = 0; i < 5; i++)
		scanf("%d", p + i);
	print(arr, sz);
	return 0;
}