#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if ((a*a)+(b*b) < (c*c)+(d*d))
    {
        printf("BOB \n");
    }
    else if ((a*a)+(b*b) > (c*c)+(d*d))
    {
        printf("ALEX \n");
    }
    else
    {
        printf("EQUAL \n");
    }
    
    
    
}

return 0 ;
}