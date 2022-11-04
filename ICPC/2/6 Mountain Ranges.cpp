#include <stdio.h>
int main()
{
    int m1 = 0, m2 = 0, n = 0, x = 0, i = 0, h1 = 0, h2 = 0;
    scanf("%d%d", &n , &x );
    for(i = 0; i < n; i++)
    {
        scanf("%d", &h1);
        if(h1-h2<=x&&h2-h1>=-x)
        {
            m1++;
            if(m2<m1)m2 = m1;
        }
        else 
        {
            if(m2<m1)m2 = m1;
            m1 = 1;
        }
        h2=h1;
    }
    printf("%d", m2);
    return 0;
}
