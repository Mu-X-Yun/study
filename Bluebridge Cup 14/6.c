#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int s = 0, t = 0;
    scanf("%d", &s);
    scanf("%d", &t);
    if (s < t)printf("%d", t - s);
    else printf("%d", t + 7 - s);
    return 0;
}
