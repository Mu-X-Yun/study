//����һ�������ݹ����ϰ��
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
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