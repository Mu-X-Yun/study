#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i = 0, n = 0, h1 = 0, m1 = 0, s1 = 0, u1 = 0, i1 = 0, h2 = 0, m2 = 0, s2 = 0, u2 = 0, i2 = 0, j = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        h2 = h1;
        m2 = m1;
        s2 = s1;
        u2 = u1;
        i2 = i1;
        scanf("%d:%d:%d%d%d", &h1, &m1, &s1, &u1, &i1);
        j += (u2 * i2 * (3600 * (h1 - h2) + 60 * (m1 - m2) + (s1 - s2)));
    }
    printf("%d", j);
    return 0;
}
