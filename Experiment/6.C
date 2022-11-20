//这是循环结构程序设计二实验题的第六题
//编程，求Sn=a+aa+aaa+...+aa...a之值，其中a是一个1~9的数字。例如Sn=2+22+222+2222+22222(此时n=5，a=2）。n由键盘输入。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int Sn = 0, m = 0, n = 0, a = 0, i = 0;
	printf("请输入n，a：");
	scanf("%d%d", &n, &a);
	for (i = 0; i < n; i++)
	{
		m = m * 10 + a;
		Sn += m;
	}
	printf("%d", Sn);
}