#include <stdio.h>
int main()
{
    int t=0,i=0,a=0,b=0,c=0,d=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(!a+!b+!c+!d==4)printf("Typically Otaku\n");
        else if(!a+!b+!c+!d==3)printf("Eye-opener\n");
        else if(!a+!b+!c+!d==2)printf("Young Traveller\n");
        else if(!a+!b+!c+!d==1)printf("Excellent Traveller\n");
        else printf("Contemporary Xu Xiake\n");
    }
    return 0;
}
