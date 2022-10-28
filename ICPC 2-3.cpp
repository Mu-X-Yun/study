#include <stdio.h>
int main()
{
    double i=0,n=0;
    while(scanf("%lf",&i)!=EOF)
    {
        n=(4.0/3.0)*3.1415927*i*i*i;
        printf("%.3lf\n",n);
    }
    return 0;
}
