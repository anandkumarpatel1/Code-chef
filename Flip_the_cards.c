#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int x,y;
    scanf("%d %d",&x,&y);
    if (y==0)
    {
        printf("0\n");
    }
    else if (x==y)
    {
        printf("0\n");
    }
    else if (y>(x/2))
    {
        printf("%d\n",x-y);
    }
    else
    {
        printf("%d\n",y);
    }
    
    
}

return 0 ;
}