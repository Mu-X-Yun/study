//这是一个函数递归的练习。
//接受一个整型值（无符号），按照顺序打印它的每一位。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int Print(unsigned int n)
{
    if (n > 9)Print(n / 10);
    printf("%d ", n % 10);
}
void main()
{
    unsigned int i = 0;
    scanf("%d", &i);
    Print(i);
    return 0;
}