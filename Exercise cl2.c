//��������ҵ�һ����ϰ�⡣
//��һ�����������в��Ҿ���ĳ������n����дint binsearch(int x,int v[],int n);���ܣ���v[0]<=v[1]<=v[2]<=......<=v[n-1]�������в���x��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int l = 0, r = sizeof(arr) / sizeof(arr[0]) - 1, a = 0, i = 0;
	printf("������Ҫ�ҵ�����");
	scanf("%d", &i);
	while (1)
	{
		a = (l + r) / 2;
		if (arr[a] > i)r = a - 1;
		else if (arr[a] < i)l = a + 1;
		else
		{
			printf("%d���±�Ϊ%d\n", i, a);
			break;
		}
		if (l > r)
		{
			printf("�Ҳ���\n");
			break;
		}
	}
}