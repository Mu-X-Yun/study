#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    char arr[100] = { 0 }, c = 0;
    int i = 0;
    for (i = 0; i < 100; i++)
    {
        c = getchar();
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            c -= 32;
        if (c == '\n')
            break;
        arr[i] = c;
    }
    printf("%s", arr);
    return 0;
}
