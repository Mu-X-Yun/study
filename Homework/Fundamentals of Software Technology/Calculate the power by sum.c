//不用循环且仅用加法（sum函数）求次方
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int sum(int x,int y)
{
    return x + y;
}
int square(int x, int n, int i)
{
    n++;
    if (n < i)return sum(square(x, n, i), x);
    else return x;
}
int power(int x,int y,int m,int n,int i)
{
    m++;
    if (m < y)return power(x = square(x, n, i), y, m, n, i);
    else return x;
}
void main()
{
    int x = 0, y = 0, m = 0, n = 0, i = 0;
    printf("请输入两个整数x,y：");
    scanf("%d%d", &x, &y);
    i = x;
    printf("x的y次方为：%d", power(x, y, m, n, i));
}
