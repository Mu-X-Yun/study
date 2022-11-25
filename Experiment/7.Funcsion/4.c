//这是函数实验题的第四题。
#include <stdio.h>
int n = 10;
void func1()
{
	int n = 20;
	printf("func1 n:%d\n", n);
}
void func2(int n)
{
	printf("func2 n:%d\n", n);
}
void func3()
{
	printf("func3 n:%d\n", n);
}
void main()
{
	int n = 30;
	func1();
	func2(n);
	func3();
	{
		int n = 40;
		printf("block n:%d\n", n);
	}
	printf("main n:%d\n", n);
}