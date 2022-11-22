//这是某教材习题七的第四题。
//一维数组中的数按从小到大排序，用二分法查找算法编写查找指定值x的程序。若找到，输出x在数组中的位置；否则，输出没找到的相关信息。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[5] = { 1,3,5,7,9 }, sz = sizeof(arr) / sizeof(arr[0]), l = 0, r = sz - 1 , i = 0;
	printf("请输入要找的数：");
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
		printf("没找到");
	else
		printf("这个数的下标为%d", (l + r) / 2);
	return 0;
}