#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
while (n--)
{
    int a, b, c;
    scanf("%d %d %d",&a , &b, &c);
    if (a>b && a < c)
    {
        printf("%d",a);
    }
    else if (b>c && b<a)
    {
        printf("%d",b);
    }
    else if (c > a && c < b)
    {
        printf("%d",c);
    }
    
    
    
}

return 0 ;
}