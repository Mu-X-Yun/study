#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    char arr[100][100];
    int n = 0, m = 0, i = 0, j = 0, a = 0, b = 0, i1 = 0, j1 = 0, sum = 0, flag = 0;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%c", &arr[i][j]);
        }
        getchar();
    }
    for (a = 2, b = 2; a <= n && b <= m; a++, b++)
    {
        for (i = 0; i < n; i++)
        {
            if (i + a <= n)
            {
                for (j = 0; j < m; j++)
                {
                    if (j + b <= m)
                    {
                        for (i1 = i; i1 < i + a; i1++)
                        {
                            if (arr[i][j] != arr[i1][j])
                                flag++;
                        }
                        for (j1 = j; j1 < j + b; j1++)
                        {
                            if (arr[i][j] != arr[i][j1])
                                flag++;
                        }
                        for (i1 = i + a - 2, j1 = j; i1 > i && j1 < j + b; i1--, j1++)
                        {
                            if (arr[i][j] != arr[i1][j1])
                                flag++;
                        }
                        if (flag == 0)
                            sum++;
                        flag = 0;
                    }
                }
            }
        }
    }
    for (a = 2, b = 2; a <= n && b <= m; a++, b++)
    {
        for (i = n - 1; i >= 0; i--)
        {
            if (i - a >= -1)
            {
                for (j = 0; j < m; j++)
                {
                    if (j + b <= m)
                    {
                        for (i1 = i; i1 > i - a; i1--)
                        {
                            if (arr[i][j] != arr[i1][j])
                                flag++;
                        }
                        for (j1 = j; j1 < j + b; j1++)
                        {
                            if (arr[i][j] != arr[i][j1])
                                flag++;
                        }
                        for (i1 = i - a + 2, j1 = j; i1 < i && j1 < j + b; i1++, j1++)
                        {
                            if (arr[i][j] != arr[i1][j1])
                                flag++;
                        }
                        if (flag == 0)
                            sum++;
                        flag = 0;
                    }
                }
            }
        }
    }
    for (a = 2, b = 2; a <= n && b <= m; a++, b++)
    {
        for (i = 0; i < n; i++)
        {
            if (i + a <= n)
            {
                for (j = m - 1; j >= 0; j--)
                {
                    if (j - b >= -1)
                    {
                        for (i1 = i; i1 < i + a; i1++)
                        {
                            if (arr[i][j] != arr[i1][j])
                                flag++;
                        }
                        for (j1 = i; j1 > j - b; j1--)
                        {
                            if (arr[i][j] != arr[i][j1])
                                flag++;
                        }
                        for (i1 = i, j1 = j - b + 2; i1 < i +a && j1 < j; i1++, j1++)
                        {
                            if (arr[i][j] != arr[i1][j1])
                                flag++;
                        }
                        if (flag == 0)
                            sum++;
                        flag = 0;
                    }
                }
            }
        }
    }
    for (a = 2, b = 2; a <= n && b <= m; a++, b++)
    {
        for (i = n - 1; i >= 0; i--)
        {
            if (i - a >= -1)
            {
                for (j = m - 1; j >= 0; j--)
                {
                    if (j - b >= -1)
                    {
                        for (i1 = i; i1 > i - a; i1--)
                        {
                            if (arr[i][j] != arr[i1][j])
                                flag++;
                        }
                        for (j1 = i; j1 > j - b; j1--)
                        {
                            if (arr[i][j] != arr[i][j1])
                                flag++;
                        }
                        for (i1 = i + a - 2, j1 = j; i1 > i && j1 < j + b; i1--, j1++)
                        {
                            if (arr[i][j] != arr[i1][j1])
                                flag++;
                        }
                        if (flag == 0)
                            sum++;
                        flag = 0;
                    }
                }
            }
        }
    }
    printf("%d", sum);
    return 0;
}
