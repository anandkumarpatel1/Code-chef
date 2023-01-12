#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a==0 && b==0 && c==0 && d==0)
    {
        printf("IN \n");
    }
    else
    {
        printf("OUT \n");
    }
    
}

return 0 ;
}