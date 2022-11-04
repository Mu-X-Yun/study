//Hanoi Problem.
//My Solution:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int arr1[20] = { 0 }, arr2[20] = { 0 }, arr3[20] = { 0 };
int i2 = 0, m = 0, a = 0;
void Print(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)printf("   %d   %d   %d\n", arr1[i], arr2[i], arr3[i]);
	printf("\n");
}
void A1()
{
	if (m % (3 * a) > a / 2 && m % (3 * a) < a / 2 + a + 1)
	{
		arr2[i2] = i2;
		arr1[i2] = 0;
	}
	else if (m % (3 * a) > a / 2 + a && m % (3 * a) < a / 2 + 2 * a + 1)
	{
		arr3[i2] = i2;
		arr2[i2] = 0;
	}
	else
	{
		arr1[i2] = i2;
		arr3[i2] = 0;
	}
}
void A2()
{
	if (m % (3 * a) > a / 2 && m % (3 * a) < a / 2 + a + 1)
	{
		arr3[i2] = i2;
		arr1[i2] = 0;
	}
	else if (m % (3 * a) > a / 2 + a && m % (3 * a) < a / 2 + 2 * a + 1)
	{
		arr2[i2] = i2;
		arr3[i2] = 0;
	}
	else
	{
		arr1[i2] = i2;
		arr2[i2] = 0;
	}
}
void A3()
{
	if (i2 % 2 == 1)
	{
		a = pow(2, i2);
		A1();
	}
	if (i2 % 2 == 0)
	{
		a = pow(2, i2);
		A2();
	}
}
int main()
{
	int n = 0, i1 = 0;
	printf("请输入圆盘数（不超过20）：");
	scanf("%d", &n);
	for (i1 = 1; i1 <= n; i1++)arr1[i1] = i1;
	Print(n);
	for (m = 2; m <= pow(2, n ); m++)
	{
		for (i2 = 1; i2 < n ; i2++)A3();
		i2 = n;
		A3();
		printf("第%d步：\n", m-1);
		Print(n);
	}
}

//Nominal Solution:
//#include <stdio.h>
//#include <windows.h>
//void Hanoi(int n, char a, char b, char c);
//void Move(int n, char a, char b);
//int count;
//int main()
//{
//	int n = 8;
//	printf("汉诺塔的层数:\n");
//	scanf(" %d", &n);
//	Hanoi(n, 'A', 'B', 'C');
//	Sleep(20000);
//	return 0;
//}
//void Hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		Move(n, a, c);
//	}
//	else
//	{
//		Hanoi(n - 1, a, c, b);
//		Move(n, a, c);
//		Hanoi(n - 1, b, a, c);
//	}
//}
//void Move(int n, char a, char b)
//{
//	count++;
//	printf("第%d次移动 Move %d: Move from %c to %c !\n", count, n, a, b);
//}
