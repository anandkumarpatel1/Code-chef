#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int x,y;
    scanf("%d %d",&x,&y);
    if (x<y)
    {
        printf("%d\n",y/x);
    }
    else if (x==y)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    
}

return 0 ;
}