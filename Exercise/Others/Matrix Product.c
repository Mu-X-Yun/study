//求两个矩阵的乘积
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define m 2//矩阵A的行数
#define s 3//矩阵A的列数和矩阵B的行数
#define n 2//矩阵B的列数
void main()
{
    int i1 = 0, j1 = 0, i2 = 0, j2 = 0, i = 0, j = 0;
    int A[m][s] = { 0 };
    int B[s][n] = { 0 };
    int C[m][n] = { 0 };
    printf("请输入%d行%d列矩阵A：\n", m, s);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < s; j++)scanf("%d", &A[i][j]);
    }
    printf("请再输入%d行%d列矩阵B：\n", s, n);
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < n; j++)scanf("%d", &B[i][j]);
    }
    printf("C=A*B=\n");
    for (i1 = 0; i1 < m; i1++)
    {
        for (j2 = 0; j2 < n; j2++)
        {
            for (j1 = 0, i2 = 0; j1 < s || i2 < s; j1++, i2++)
            {
                C[i1][j2] += (A[i1][j1] * B[i2][j2]);
            }
            printf("%d ", C[i1][j2]);
        }
        printf("\n");
    }
}
