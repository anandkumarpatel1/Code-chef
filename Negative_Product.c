#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int a , b ,c;
    scanf("%d %d %d",&a , &b ,&c);
    if ((a*b)<0 || (b*c)<0 || (c*a)<0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    
    
    
}

return 0 ;
}