//这是函数实验题的第七题。
//编写程序，求两个数的最大公约数和最小公倍数。要求用多个函数和多个源文件实现。
#include "sta.h"
int main()
{
	int a = 0, b = 0;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	printf("这两个整数的最大公约数为%d，最小公倍数为%d\n", GCD(a, b), LCM(a, b));
	return 0;
}